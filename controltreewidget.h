#ifndef CONTROLTREEWIDGET_H
#define CONTROLTREEWIDGET_H

#include <QWidget>
#include"Global.hpp"
#include<QTreeWidgetItem>


namespace Ui {
class controltreewidget;
}

class controltreewidget : public QWidget
{

    Q_OBJECT

public:
    explicit controltreewidget(QWidget *parent = nullptr);
    ~controltreewidget();


signals:
    void sendShowIndex(WidgetTabType);
    void Please_hideLabelWidget();

public slots:
    void change(int width,int height);
private slots:
    void on_treeWidget_clicked(const QModelIndex &index);

    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);



private:
    Ui::controltreewidget *ui;
    void initValue();
};

#endif // CONTROLTREEWIDGET_H
