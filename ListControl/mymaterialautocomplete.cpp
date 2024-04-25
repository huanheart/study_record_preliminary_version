#include "mymaterialautocomplete.h"

MyMaterialAutoComplete::MyMaterialAutoComplete(QWidget *parent)
    : QLineEdit{parent}
{
    LineEdit_init();

}

MyMaterialAutoComplete::~MyMaterialAutoComplete()
{

    delete model;
    delete completer;

}

void MyMaterialAutoComplete::MyMateriaAppend(QString str) //添加元素
{
    list.append(str);
    QSet<QString> tempSet=list.toSet();
    UnRepeatList=tempSet.toList();
    model->setStringList(UnRepeatList); //由于这个
}

void MyMaterialAutoComplete::MyMateriaDelete(QString str) //删除元素. bool QStringList::removeOne(const QString &value)
{
    list.removeOne(str);           //移除第一个出现的元素
    QSet<QString> tempSet=list.toSet();
    UnRepeatList=tempSet.toList();
    model->setStringList(UnRepeatList);
}

void MyMaterialAutoComplete::Update_MyMaterialAutoComplete(QString NewLineEdit, QString OldLineEdit)
{
    MyMateriaAppend(NewLineEdit);
    MyMateriaDelete(OldLineEdit);
}

void MyMaterialAutoComplete::DeleteCurrentLineEdit(QString DeleteLineEdit)
{
    MyMateriaDelete(DeleteLineEdit);
}

void MyMaterialAutoComplete::LineEdit_init()
{
    model=new QStringListModel(this);
    model->setStringList(list);
    completer=new QCompleter(model,this);
    completer->setCaseSensitivity(Qt::CaseInsensitive); //这里设置为不区分大小写。
    this->setCompleter(completer);
    this->setPlaceholderText("搜索......");
}
