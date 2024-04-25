#ifndef SPLASHSCREEN_H
#define SPLASHSCREEN_H

#include <QSplashScreen>
#include <QPropertyAnimation>

class SplashScreen : public QSplashScreen
{
    Q_OBJECT
public:
//    explicit SplashScreen(QObject *parent = nullptr);

    ~SplashScreen();
    static SplashScreen *getInstance();
protected:
    void paintEvent(QPaintEvent* event);

public:
    void setStagePercent(const int &percent,const QString &message);
    void setStart(QWidget*widget,const QString &title,const QString&logoFile);
    void setFinish();


private:
    double m_percent;
    QWidget *m_mainWidget;
    QPixmap m_pixLogo;
    QString m_textLogo;
    QString m_message;
    static SplashScreen *m_instance;
    QPropertyAnimation *m_propertyAnimation;

    const int ANIMATION_DURATION=1000;

private:
    explicit SplashScreen(const QPixmap &pixmap);
signals:

};

#endif // SPLASHSCREEN_H
