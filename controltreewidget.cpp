#include "controltreewidget.h"
#include "ui_controltreewidget.h"
#include<QAbstractItemView>



controltreewidget::controltreewidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::controltreewidget)
{
    ui->setupUi(this);
    this->initValue();
}

controltreewidget::~controltreewidget()
{
    delete ui;    
}

void controltreewidget::initValue()
{
    ui->treeWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->treeWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->treeWidget->setHeaderHidden(true); //隐藏头部
    ui->treeWidget->header()->setStretchLastSection(true);
    ui->treeWidget->topLevelItem(0)->setSelected(true); //默认选中最顶层
    ui->treeWidget->setFocusPolicy(Qt::NoFocus); //防止焦点事件,不让它有焦点事件
}

void controltreewidget::on_treeWidget_clicked(const QModelIndex &index)
{
    emit sendShowIndex(WidgetTabType(index.row()));
    //这下面后面得改，出现了一些设置问题
    QTreeWidgetItem * treeWidgetItem=ui->treeWidget->topLevelItem(index.row());
    if(nullptr!=treeWidgetItem)
    {
        ui->treeWidget->clearSelection();
        treeWidgetItem->setSelected(true);
    }
}
//QModelIndex 用于标识模型中的一个位置，其中包括行、列和父项的信息。通过这个索引，可以唯一地定位模型中的一个数据项。
//用这种索引会更好些,点击则显示对应项


void controltreewidget::on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous)
{
    emit Please_hideLabelWidget();
}

void controltreewidget::change(int width,int height)
{
    qDebug()<<width*2/10;
    this->resize(235,height-49);
}

