#ifndef SYSTEMTRAY_H
#define SYSTEMTRAY_H

#include <QObject>
#include<QSystemTrayIcon>
#include<QAction>
#include<QApplication>
#include<QMenu>
#include<QWidget>
#include<Global.hpp>

class SystemTray : public QSystemTrayIcon
{
    Q_OBJECT

public:
    explicit SystemTray(QWidget *parent = nullptr);
    void addAction();
    void createAction();
public :
    QAction *getShowWidget()const ;
    QAction *getMinWidget() const ;
    QAction *getAboutSoftWare() const ;

signals:
    void ShowMainWindow();
    void showAboutUs();

private slots:
    void aboutSlot();
private:
    QMenu * myMenu;
    QAction*showWidget;
    QAction * minWidget;
    QAction* aboutSoftWare;
    QAction* exitSoftWare;

};

#endif // SYSTEMTRAY_H
