#ifndef COOLPAGE_H
#define COOLPAGE_H

#include <QWidget>
#include<QPainter>
#include<QPixmap>
#include"titlebar.h"

namespace Ui {
class coolpage;
}

class coolpage : public TitleBar
{
    Q_OBJECT

public:
    explicit coolpage(QWidget *parent = nullptr);
    ~coolpage();

signals:
    void SetMaxSize(bool Change);
    void changetest();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::coolpage *ui;
    void paintEvent(QPaintEvent *event);
};

#endif // COOLPAGE_H
