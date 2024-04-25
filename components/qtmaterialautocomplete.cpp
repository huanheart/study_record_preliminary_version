#include "qtmaterialautocomplete.h"
#include "qtmaterialautocomplete_p.h"
#include <QtWidgets/QGraphicsDropShadowEffect>
#include <QtWidgets/QVBoxLayout>
#include <QEvent>
#include <QTimer>
#include <QPainter>
#include <QDebug>
#include "qtmaterialautocomplete_internal.h"
#include "qtmaterialflatbutton.h"
#include<QDebug>

/*!
 *  \class QtMaterialAutoCompletePrivate
 *  \internal
 */

/*!
 *  \internal
 */
QtMaterialAutoCompletePrivate::QtMaterialAutoCompletePrivate(QtMaterialAutoComplete *q)
    : QtMaterialTextFieldPrivate(q)
{

}

/*!
 *  \internal
 */
QtMaterialAutoCompletePrivate::~QtMaterialAutoCompletePrivate()
{
}

/*!
 *  \internal
 */
void QtMaterialAutoCompletePrivate::init()
{
    Q_Q(QtMaterialAutoComplete);   //QtMaterialAutoCompletePrivate其实是这个

    menu         = new QWidget;
    frame        = new QWidget;
    stateMachine = new QtMaterialAutoCompleteStateMachine(menu);
    menuLayout   = new QVBoxLayout;
    maxWidth     = 0;

    menu->setParent(q->parentWidget());
    frame->setParent(q->parentWidget());

    menu->installEventFilter(q);  ///这个q就是刚刚的QtMaterialAutoComplete，由于是两个不同的类，固然将这个东西进行一个绑定到
    //原本最终的那个类上去，将其父对象变成这个.
//    这意味着，当 menu 接收到事件时，q 对象的事件过滤器函数将被调用
    frame->installEventFilter(q);

    QGraphicsDropShadowEffect *effect = new QGraphicsDropShadowEffect; //这个是用来创建阴影效果的
    effect->setBlurRadius(11); //设置阴影的模糊半径。这决定了阴影的模糊程度。
    effect->setColor(QColor(0, 0, 0, 50));  //设置阴影的颜色。这里使用了 QColor 类，表示颜色，
    //参数是 RGBA 值。在这里，阴影颜色是黑色 (0, 0, 0)，并且透明度为 50（范围是 0 到 255）。
    effect->setOffset(0, 3);//设置阴影的偏移量。这决定了阴影相对于原始图形的位置

    frame->setGraphicsEffect(effect); //设置阴影
    frame->setVisible(false);   //他是有一个框的

    menu->setLayout(menuLayout);
    menu->setVisible(false); //在最开始的时候，菜单是不可见的，以及框给进行一个隐藏了

    menuLayout->setContentsMargins(0, 0, 0, 0);
    //这个函数的作用是调整内容区域的大小，以便在内容区域周围留出一定的空白。这对于控制布局和界面外观非常有用。

    menuLayout->setSpacing(0);

    QObject::connect(q, SIGNAL(textEdited(QString)), q, SLOT(updateResults(QString)));

    stateMachine->start();
    //stateMachine->start(); 的作用是启动状态机，使其进入运行状态，准备接收和处理事件，执行相应的状态转换逻辑。
}

/*!
 *  \class QtMaterialAutoComplete
 */

QtMaterialAutoComplete::QtMaterialAutoComplete(QWidget *parent)
    : QtMaterialTextField(*new QtMaterialAutoCompletePrivate(this), parent)
{
    d_func()->init();
    //PIMPL 的方式。使用 PIMPL 主要是为了在类的实现中隐藏更多的细节，
    //特别是对于一些包含大量或复杂实现的类，以防止暴露过多的实现细节到类的头文件。
}

QtMaterialAutoComplete::~QtMaterialAutoComplete()
{

}

void QtMaterialAutoComplete::setDataSource(const QStringList &data)
{
    Q_D(QtMaterialAutoComplete);  //别看写的是这样，实际上还是QtMaterialAutoCompletePrivate，因为
    //#define Q_D(Class) Class##Private * const d = d_func()它的宏定义后面就是会加上Private的后缀的
//    Q_D(QtMaterialAutoCompletePrivate);
    d->dataSource = data;

    update(); //这还没看，要到后面的继承中才能看到这个了，得找到它的QPaintEvent



}

void QtMaterialAutoComplete::updateResults(QString text)
{
//    qDebug()<<text; //这个text是更改后lineEdit所显示的内容

    Q_D(QtMaterialAutoComplete);
    qDebug()<<"特殊特大文案";   //当上面的文本信息进行了改变的时候，就触发这个内容，
    QStringList results;
    QString trimmed(text.trimmed());
    //它用于移除字符串两端的空白字符（例如空格、制表符、换行符等）。
    //trimmed() 返回一个新的 QString 对象，其中包含原始字符串两端去除空白字符后的内容

    if (!trimmed.isEmpty()) {
        QString lookup(trimmed.toLower());
        QStringList::iterator i;
        for (i = d->dataSource.begin(); i != d->dataSource.end(); ++i) {
            if (i->toLower().indexOf(lookup) != -1) {
                results.push_back(*i);
            }
        }
    }   //什么时候会放入到result中呢？首先输入的内容不是空的，才进入语句。
    //其次，把它变成小写。这个lookup就相当于是用户栏输入的东西，然后检测这个i，也就是datasource是否包含lookup的这一部分子串，有就加上


    const int diff = results.length() - d->menuLayout->count();
    QFont font("Roboto", 12, QFont::Normal);
    qDebug()<<diff; //这个diff很巧妙，比如一开始有3个结果，此时还没有让这3个按钮弄到菜单那里，那么就是3-0=3
    //然后就将3个给弄上去。
    //删除也是同样的道理，假设一开始菜单显示出3个123，然后我的栏输出的是123，此时我再加上一个4，那么此时
    //进行一个匹配，发现result是0，但是此时上面有3个，固然是-3.说明我要删除3个，即全给删除了


    if (diff > 0) {
        for (int c = 0; c < diff; c++) {
            QtMaterialFlatButton *item = new QtMaterialFlatButton;
            item->setFont(font);
            item->setTextAlignment(Qt::AlignLeft); //对齐方式，左对齐
            item->setCornerRadius(0);//item->setCornerRadius(0);: 这行代码设置按钮的圆角半径。
            //将圆角半径设置为 0 表示按钮的边角是直角，而不是圆角。

//            item->setStyleSheet("background-color: blue; color: white;"); //这个没有用

            item->setHaloVisible(false); //设置光晕可见性,
            item->setFixedHeight(20);    //设置每一个按钮的高度 //这里原本是50的，我改成了20
            item->setOverlayStyle(Material::TintedOverlay); //设置覆盖样式，是自己定义的，到时候可以进行一个观看

            item->setForegroundColor(QColor(0,198,231)); //这里我手动修改了它的颜色，这个是我自己加上去的,后面可以进行一个多传参数
            //来进行一个判断你要的颜色


            d->menuLayout->addWidget(item); //把它放到这个布局上面，可以做到显示到搜索框的下面
            item->installEventFilter(this); //这个过滤的部分还没有看
        }
    } else if (diff < 0) {
        for (int c = 0; c < -diff; c++) {
            qDebug()<<"nihao1“；"; //当没有匹配的条数之后，就把内容直接删除了，比如现在输入了一个你好，匹配到一个
            //你好，然后把你好这两个字删除了，就没有匹配的选项了，所以这个就是用来删除原本那个匹配项

            //这个注释的代码是我写的，其实它搜索的结果是按钮，但是->widget是返回widget，也可以通过我这样子进行一个转换
            //然后进行一个删除按钮，固然能也能达到目的
//            QtMaterialFlatButton *widget = qobject_cast<QtMaterialFlatButton*>(d->menuLayout->itemAt(0)->widget());
            QWidget *widget = d->menuLayout->itemAt(0)->widget();
            if (widget) {
//                qDebug()<<"成功删除";
                d->menuLayout->removeWidget(widget);
                delete widget;
            }
        }
    }

    QFontMetrics *fm = new QFontMetrics(font);
    d->maxWidth = 0;

    for (int i = 0; i < results.count(); ++i) {
        QWidget *widget = d->menuLayout->itemAt(i)->widget(); //当列表中有结果的时候才会出现这一段
        QtMaterialFlatButton *item;
        if ((item = static_cast<QtMaterialFlatButton *>(widget))) {
            QString text = results.at(i);
            qDebug()<<"样式变暖了";
            QRect rect = fm->boundingRect(text);
            d->maxWidth = qMax(d->maxWidth, rect.width());
            item->setText(text);
        }
    }

    if (!results.count()) { //列表没有内容的时候执行这一段,将状态机的信息改变
        qDebug()<<"发送1";
        emit d->stateMachine->shouldClose();
    } else { //列表有内容的时候执行这段
        qDebug()<<"发送2";
        emit d->stateMachine->shouldOpen();
    }

    d->menu->setFixedHeight(results.length()*20); //改变菜单的那个高度，这里原本是20的，我改成了50
    d->menu->setFixedWidth(qMax(d->maxWidth + 24, width()));
    d->menu->update();       //这个不知道干嘛的，现在并没发现什么用，把它注释掉后发现没什么影响呀
}

bool QtMaterialAutoComplete::QtMaterialAutoComplete::event(QEvent *event)
{
    Q_D(QtMaterialAutoComplete);
//    qDebug()<<"shanchsadasd”；"; //这句话在运行的时候会执行很多次，那是因为系统会帮助你调整一些控件什么的
    switch (event->type())
    {
    case QEvent::Move:
//        qDebug()<<"干你妈移动";
    case QEvent::Resize: {
//        qDebug()<<"调整大小";
        d->menu->move(pos() + QPoint(0, height() + 6)); //这个其实就是让显示出来的搜索选项在搜索框的下面
        break;
    }
    case QEvent::ParentChange: {
//        qDebug()<<"父亲噶便";
        QWidget *widget = static_cast<QWidget *>(parent());
        if (widget) {
            d->menu->setParent(widget);
            d->frame->setParent(widget);
        }
        break;
    }
    default:
        break;
    }
    return QtMaterialTextField::event(event);
}

bool QtMaterialAutoComplete::eventFilter(QObject *watched, QEvent *event)  //这个是因为有添加事件过滤其而导致的
{
    Q_D(QtMaterialAutoComplete);

    if (d->frame == watched)
    {
        switch (event->type())
        {
        case QEvent::Paint: {
            qDebug()<<"shenme1“；:";
            QPainter painter(d->frame);
            painter.fillRect(d->frame->rect(), Qt::white); //这样做可能是为了确保 d->frame 的背景始终为白色。
            break;
        }
        default:
            break;
        }
    }
    else if (d->menu == watched)
    {
        switch (event->type())
        {
        case QEvent::Resize:
        case QEvent::Move: {
            qDebug()<<"它移动了";
            d->frame->setGeometry(d->menu->geometry());
            break;
        }
        case QEvent::Show: {
            qDebug()<<"展示";
            d->frame->show();
            d->menu->raise();
            break;
        }
        case QEvent::Hide: {  //会将其隐藏掉
            qDebug()<<"隐藏";
            d->frame->hide();   //在点击按钮的时候，如果没有隐藏，那么这个frame将会还在这里
            break;
        }
        default:
            break;
        }
    }
    else
    {
        switch (event->type())
        {
        case QEvent::MouseButtonPress: {
//            qDebug()<<"成功？";        //这里在点击按钮的时候，把文本放到lineEdit中
            emit d->stateMachine->shouldFade();
            QtMaterialFlatButton *widget;
            if ((widget = static_cast<QtMaterialFlatButton *>(watched))) {
                QString text(widget->text());
                setText(text);
                emit itemSelected(text);     //这个是发给自己的lineEdit的
            }
            break;
        }
        default:
            break;
        }
    }
    return QtMaterialTextField::eventFilter(watched, event);
}
