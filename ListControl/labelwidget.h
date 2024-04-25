#ifndef LABELWIDGET_H
#define LABELWIDGET_H

#include <QWidget>
#include<QMessageBox>
#include<QString>
#include<QDebug>
#include<Global.hpp>


namespace Ui {
class LabelWidget;
}

class LabelWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LabelWidget(QWidget *parent = nullptr);
    ~LabelWidget();

signals:
    void SaveInformation(LabelInformation Information,enum Whether_to_send decide);
    void SaveLineEdit_toComBoBox(QString LineEdit);
//    void SaveLineEdit_toMap(QString LineEdit);
private:

    LabelInformation Information;

private slots:
    void on_Save_clicked();



    void on_Query_clicked();

    void on_AddTask_clicked();

private:
    Ui::LabelWidget *ui;
};

#endif // LABELWIDGET_H
