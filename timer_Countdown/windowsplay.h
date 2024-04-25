#ifndef WINDOWSPLAY_H
#define WINDOWSPLAY_H

#include <QThread>

#include <windows.h>
#include <mmdeviceapi.h>
#include <endpointvolume.h>
#include <audioclient.h>
#include <iostream>
#include <Windows.h>
#include <Mmdeviceapi.h>
#include <Audiopolicy.h>
#include<QMediaPlayer>


#define SAFE_RELEASE(p) if (p) { p->Release(); p = nullptr; }

class WindowsPlay : public QThread
{
    Q_OBJECT
public:
    explicit WindowsPlay(QObject *parent = nullptr);



protected:
    void run()override;

private:
    BOOL SetCurrentProcessVolume(DWORD dwVolume, BOOL IsMixer,bool DecideDown);
    QMediaPlayer *FinishPlayer=nullptr;

signals:

};

#endif // WINDOWSPLAY_H
