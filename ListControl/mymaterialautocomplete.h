#ifndef MYMATERIALAUTOCOMPLETE_H
#define MYMATERIALAUTOCOMPLETE_H


#include <QWidget>
#include<components/qtmaterialautocomplete.h>
#include<QLineEdit>
#include<QDebug>
#include<QStringList>
#include<QCompleter>
#include<QStringListModel>
#include<QSet>

//class QtMaterialAutoCompletePrivate;

//class MyMaterialAutoComplete : public QtMaterialAutoComplete,我就不继承这个了，它的有点难搞

class MyMaterialAutoComplete : public QLineEdit
{
    Q_OBJECT
public:
    explicit MyMaterialAutoComplete(QWidget *parent = nullptr);
    ~MyMaterialAutoComplete();

public slots:
    void MyMateriaAppend(QString str); //添加了之后，就可以使得标签名字和下标框有一个关联了
    void MyMateriaDelete(QString str);
    void Update_MyMaterialAutoComplete(QString NewLineEdit,QString OldLineEdit);
    void DeleteCurrentLineEdit(QString DeleteLineEdit);


private:
    QStringList list;
    QStringList UnRepeatList; //通过绑定不重复的List来防止搜索的时候，相同ListControl的名字但是两个不同ListControl出现在搜索栏上多次
    QCompleter *completer=nullptr;
    QStringListModel *model=nullptr;

private:
    void LineEdit_init();

};

#endif // MYMATERIALAUTOCOMPLETE_H
