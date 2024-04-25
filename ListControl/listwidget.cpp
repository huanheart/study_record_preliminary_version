#include "listwidget.h"
#include "ui_listwidget.h"


ListWidget::ListWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ListWidget)
{
    ui->setupUi(this);
    this->initValue();  //这里就先不建立了，但是到时候还是得进行一个初始化，用来初始化json数据的


}

ListWidget::~ListWidget()
{
    //先给这个线程对应的结构体数据
    emit CarryList(list);
    SaveLabelInformationJson->start();
    SaveLabelInformationJson->wait();
    delete ReadLabelInformationJson;
    delete m_vboxLayout;        //
    delete SaveLabelInformationJson;
    delete ui;
}


void ListWidget::write_label(LabelInformation Information) //用于接收请求建立标签的
{
    ListControl *listControl=new ListControl(this); //这里其实并不需要绑定this，因为下面加到了布局当中，此时它的父对象就是这个布局了，加了也没关系，会自动转换父对象
    listControl->CurrentNum=++this->CurrentNum;
    list.append(listControl);
    listControl->makeStar(Information); //储存了每个listControl的具体信息
    m_vboxLayout->addWidget(listControl);
    connect(listControl,&ListControl::ShowCurrentListWidget,this,&ListWidget::ShowCurrentListWidget_two);
    emit SaveValue(Information.LineEdit); //保存information的标签,关键字,这个东西是给搜索栏用的


}

void ListWidget::SaveLabel(LabelInformation Information, Whether_to_send decide) //这里其实有用的部分就只用它的下标，这个decide是没有用的
{
    if(decide==Whether_to_send::YES)
    {
        QMessageBox::critical(this,"异常","根本不可能出现这个框！程序有bug");
        return ;
    }
    for(auto listControl:list)
    {
        if(listControl->CurrentNum!=Information.CurrentNum)
            continue;
        listControl->UpdateInformation(Information);
    }


}

void ListWidget::DeleteListControl(long long DeleteNum)
{
    for(auto it =list.begin();it!=list.end();++it)
    {
        if((*it)->CurrentNum==DeleteNum)
        {
            emit DeleteCurrentLineEdit((*it)->Information.LineEdit); //这个东西试试删除对应搜索栏的信息
            emit DeleteMapElement((*it)->Information.LineEdit); //将map进行一个删除
            //下面发送给combox删除对应的内容
            delete *it;     //这里确实删除了，固然还要切换到原本的页面
            it=list.erase(it);
            //如果只删除的话，会导致并没有让list中的该位置移动，所以会指向一个空的地方，从而导致元素数量并没有改变
            //固然出现访问野指针的情况
            emit ShowListWidget();

            break;
        }
    }
}

void ListWidget::UpdateListWidget(QString str,Update_ListWidget decide) //先把对应的所有内容全部从布局中拆下来
{
    if(m_vboxLayout->count()>0)
    {
        while(QLayoutItem *item=m_vboxLayout->takeAt(0))
        {
            if(item->widget()->parent()!=nullptr)  //要把原先的父对象给改变了
            {
                item->widget()->setParent(nullptr);
            }
            m_vboxLayout->removeWidget(item->widget());    //先移除
        }
    }

    if(decide==Update_ListWidget::ShowAll)
    {
        int i=0;
        for(auto listControl:list)
        {
            m_vboxLayout->addWidget(listControl);
        }
        return ;
    }

    //否则就是ShowPart了
    for(auto listControl:list) //部分显示的标准是，只显示本身的lineEdit包含这个str作为子串的标签
    {
        if(listControl->GetLineEdit().contains(str))
        {
            m_vboxLayout->addWidget(listControl);
        }
    }
}

void ListWidget::RecvLabelJson(QJsonArray JsonArray)
{
    for(const QJsonValue & value:JsonArray){
        if(value.isObject()){    //查看json数组中的元素是否是一个object的对象
            QJsonObject Object=value.toObject();
            ListControl* listControl=new ListControl(this); //我在想这个this和listwidget的this不是一个东西,没事，后面加到布局上了就可以自动帮我们析构
            //掉这部分的内容了
            //这样的话，会导致一些问题吗？感觉会的

            listControl->Information.LineEdit=Object["LineEdit"].toString();
            listControl->Information.StarNumber=Object["StarNumber"].toDouble();
            listControl->Information.TextEdit=Object["TextEdit"].toString();
            listControl->Information.CurrentNum=Object["CurrentNum"].toInt();            //这个不确定要不要弄，到后面可能会引发一些问题一
            list.append(listControl);
        }
    }
    QTimer::singleShot(1600,this,[=](){ //延迟触发
        emit InitCurrentLabel(JsonArray); //发送当前标签给到time_record
    });
    if(!list.empty())
    {
        this->CurrentNum=this->list.back()->Information.CurrentNum; //这个必须是information的currenntNum，而不是直接currentNum
        //否则就说明这里没有东西，就保持他是0
        //下面开始初始化来写东西
        for(auto listControl:list)
        {
            listControl->CurrentNum=listControl->Information.CurrentNum;
            //这里就不是存放i+1的了，因为原本就是在上一次已经保存过了的，所以不应该用这一次的初始值
            //即this->CurrentNum来进行一个保存
            listControl->makeStar(listControl->Information);
            m_vboxLayout->addWidget(listControl);
            connect(listControl,&ListControl::ShowCurrentListWidget,this,&ListWidget::ShowCurrentListWidget_two);
            //这里不能在初始化的时候发送连接，得进行个延迟发送
            //否则还没有建立连接就发送信号，就起不到作用了
            QTimer::singleShot(1500,this,[=](){
                 emit SaveValue(listControl->Information.LineEdit);
            }); //因为只需要在初始化用到一次，固然使用匿名表达式
        }
    }
}

void ListWidget::paintEvent(QPaintEvent *event)
{
    QStylePainter painter(this);
    QStyleOption opt;
    opt.initFrom(this);
    opt.rect = rect();
    painter.drawPrimitive(QStyle::PE_Widget, opt);

    QWidget::paintEvent(event);
}


void ListWidget::initValue()
{
    m_vboxLayout=new QVBoxLayout(ui->scrollAreaWidgetContents);
    m_vboxLayout->setSpacing(0);
    SaveLabelInformationJson=new SaveLabelJson(); //不弄对象树
    connect(this,&ListWidget::CarryList,SaveLabelInformationJson,&SaveLabelJson::recvList);
    ReadLabelInformationJson=new ReadLabelJson(); //线程不弄对象树
    connect(ReadLabelInformationJson,&ReadLabelJson::SendLabelJson,this,&ListWidget::RecvLabelJson);
    ReadLabelInformationJson->start();
    ReadLabelInformationJson->wait();
    ui->scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

