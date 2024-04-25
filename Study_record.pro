QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets multimedia multimediawidgets axcontainer

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH+=$${PWD}/coolpage #加了这个他就知道去哪里找了
INCLUDEPATH+=$${PWD}/timer_Countdown
INCLUDEPATH+=$${PWD}/ListControl
INCLUDEPATH+=$${PWD}/screen
INCLUDEPATH+=$${PWD}/controlwidget
INCLUDEPATH+=$${PWD}/CylinderControl
INCLUDEPATH+=$${PWD}/Excel

LIBS += $$PWD/libcomponents.a
LIBS +=$$PWD/OLE32.lib
INCLUDEPATH += $$PWD/components
PRE_TARGETDEPS += $$PWD/libcomponents.a

SOURCES += \
    CylinderControl/cylindercontrol.cpp \
    CylinderControl/cylinderwidget.cpp \
    CylinderControl/docklabelcontrol.cpp \
    CylinderControl/mydockwidget.cpp \
    Excel/excelexport.cpp \
    Excel/excelwidget.cpp \
    ListControl/SaveLabelJson.cpp \
    ListControl/currentlistcontrolwidget.cpp \
    ListControl/labelwidget.cpp \
    ListControl/listcontrol.cpp \
    ListControl/listwidget.cpp \
    ListControl/mymaterialautocomplete.cpp \
    ListControl/mymaterialflatbutton.cpp \
    ListControl/readlabeljson.cpp \
    closethread.cpp \
components/qtmaterialappbar.cpp \
components/qtmaterialautocomplete.cpp \
components/qtmaterialautocomplete_internal.cpp \
components/qtmaterialavatar.cpp \
components/qtmaterialbadge.cpp \
components/qtmaterialcheckbox.cpp \
components/qtmaterialcircularprogress.cpp \
components/qtmaterialcircularprogress_internal.cpp \
components/qtmaterialdialog.cpp \
components/qtmaterialdialog_internal.cpp \
components/qtmaterialdrawer.cpp \
components/qtmaterialdrawer_internal.cpp \
components/qtmaterialfab.cpp \
components/qtmaterialflatbutton.cpp \
components/qtmaterialflatbutton_internal.cpp \
components/qtmaterialiconbutton.cpp \
components/qtmateriallist.cpp \
components/qtmateriallistitem.cpp \
components/qtmaterialmenu.cpp \
components/qtmaterialmenu_internal.cpp \
components/qtmaterialpaper.cpp \
components/qtmaterialprogress.cpp \
components/qtmaterialprogress_internal.cpp \
components/qtmaterialradiobutton.cpp \
components/qtmaterialraisedbutton.cpp \
components/qtmaterialscrollbar.cpp \
components/qtmaterialscrollbar_internal.cpp \
components/qtmaterialslider.cpp \
components/qtmaterialslider_internal.cpp \
components/qtmaterialsnackbar.cpp \
components/qtmaterialsnackbar_internal.cpp \
components/qtmaterialtable.cpp \
components/qtmaterialtabs.cpp \
components/qtmaterialtabs_internal.cpp \
components/qtmaterialtextfield.cpp \
components/qtmaterialtextfield_internal.cpp \
components/qtmaterialtoggle.cpp \
components/qtmaterialtoggle_internal.cpp \
#1
    controltabwidget.cpp \
    controltreewidget.cpp \
    controlwidget/bannacontrol.cpp \
    controlwidget/bannawidget.cpp \
    coolpage/coolpage.cpp \
    coolpage/titlebar.cpp \
    main.cpp \
    mythread.cpp \
    screen/mainobject.cpp \
    screen/splashscreen.cpp \
    systemtray.cpp \
    timer_Countdown/alltimejsonRead.cpp \
    timer_Countdown/alltimejsonwrite.cpp \
    timer_Countdown/progess.cpp \
    timer_Countdown/progessson.cpp \
    timer_Countdown/time_record.cpp \
    timer_Countdown/windowsplay.cpp \
    widget.cpp
HEADERS += \
    CylinderControl/cylindercontrol.h \
    CylinderControl/cylinderwidget.h \
    CylinderControl/docklabelcontrol.h \
    CylinderControl/mydockwidget.h \
    Excel/excelexport.h \
    Excel/excelwidget.h \
    ListControl/SaveLabelJson.h \
    ListControl/currentlistcontrolwidget.h \
    ListControl/labelwidget.h \
    ListControl/listcontrol.h \
    ListControl/listwidget.h \
    ListControl/mymaterialautocomplete.h \
    ListControl/mymaterialflatbutton.h \
    ListControl/readlabeljson.h \
SDK/MaterialSDK/components/qtmaterialappbar.h \
    closethread.h \
    components/qtmaterialappbar_p.h \
    components/qtmaterialautocomplete.h \
    components/qtmaterialautocomplete_internal.h \
    components/qtmaterialautocomplete_p.h \
    components/qtmaterialavatar.h \
    components/qtmaterialavatar_p.h \
    components/qtmaterialbadge.h \
    components/qtmaterialbadge_p.h \
    components/qtmaterialcheckbox.h \
    components/qtmaterialcheckbox_p.h \
    components/qtmaterialcircularprogress.h \
    components/qtmaterialcircularprogress_internal.h \
    components/qtmaterialcircularprogress_p.h \
    components/qtmaterialdialog.h \
    components/qtmaterialdialog_internal.h \
    components/qtmaterialdialog_p.h \
    components/qtmaterialdrawer.h \
    components/qtmaterialdrawer_internal.h \
    components/qtmaterialdrawer_p.h \
    components/qtmaterialfab.h \
    components/qtmaterialfab_p.h \
    components/qtmaterialflatbutton.h \
    components/qtmaterialflatbutton_internal.h \
    components/qtmaterialflatbutton_p.h \
    components/qtmaterialiconbutton.h \
    components/qtmaterialiconbutton_p.h \
    components/qtmateriallist.h \
    components/qtmateriallist_p.h \
    components/qtmateriallistitem.h \
    components/qtmateriallistitem_p.h \
    components/qtmaterialmenu.h \
    components/qtmaterialmenu_internal.h \
    components/qtmaterialmenu_p.h \
    components/qtmaterialpaper.h \
    components/qtmaterialpaper_p.h \
    components/qtmaterialprogress.h \
    components/qtmaterialprogress_internal.h \
    components/qtmaterialprogress_p.h \
    components/qtmaterialradiobutton.h \
    components/qtmaterialradiobutton_p.h \
    components/qtmaterialraisedbutton.h \
    components/qtmaterialraisedbutton_p.h \
    components/qtmaterialscrollbar.h \
    components/qtmaterialscrollbar_internal.h \
    components/qtmaterialscrollbar_p.h \
    components/qtmaterialslider.h \
    components/qtmaterialslider_internal.h \
    components/qtmaterialslider_p.h \
    components/qtmaterialsnackbar.h \
    components/qtmaterialsnackbar_internal.h \
    components/qtmaterialsnackbar_p.h \
    components/qtmaterialtable.h \
    components/qtmaterialtable_p.h \
    components/qtmaterialtabs.h \
    components/qtmaterialtabs_internal.h \
    components/qtmaterialtabs_p.h \
    components/qtmaterialtextfield.h \
    components/qtmaterialtextfield_internal.h \
    components/qtmaterialtextfield_p.h \
    components/qtmaterialtoggle.h \
    components/qtmaterialtoggle_internal.h \
    components/qtmaterialtoggle_p.h \
    Global.hpp \
    controltabwidget.h \
    controltreewidget.h \
    controlwidget/bannacontrol.h \
    controlwidget/bannawidget.h \
    coolpage/coolpage.h \
    coolpage/titlebar.h \
    mythread.h \
    screen/mainobject.h \
    screen/splashscreen.h \
    systemtray.h \
    timer_Countdown/alltimejsonRead.h \
    timer_Countdown/alltimejsonwrite.h \
    timer_Countdown/progess.h \
    timer_Countdown/progessson.h \
    timer_Countdown/time_record.h \
    timer_Countdown/windowsplay.h \
    widget.h
FORMS += \
    CylinderControl/cylindercontrol.ui \
    CylinderControl/cylinderwidget.ui \
    CylinderControl/docklabelcontrol.ui \
    CylinderControl/mydockwidget.ui \
    Excel/excelwidget.ui \
    ListControl/currentlistcontrolwidget.ui \
    ListControl/labelwidget.ui \
    ListControl/listcontrol.ui \
    ListControl/listwidget.ui \
    controltabwidget.ui \
    controltreewidget.ui \
    controlwidget/bannacontrol.ui \
    controlwidget/bannawidget.ui \
    coolpage/coolpage.ui \
    timer_Countdown/time_record.ui \
    widget.ui



# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
#    components/resources.qrc \
    new.qrc

SUBDIRS += \
    components/components.pro

DISTFILES += \
    Photo/star.png
