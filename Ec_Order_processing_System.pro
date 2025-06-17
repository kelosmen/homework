QT       += core gui
QT       +=core sql#添加数据库模块

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminmwidget.cpp \
    customermwidget.cpp \
    dialog_register.cpp \
    main.cpp \
    dialog_login.cpp \
    myapp.cpp

HEADERS += \
    adminmwidget.h \
    customermwidget.h \
    dialog_login.h \
    dialog_register.h \
    myapp.h

FORMS += \
    adminmwidget.ui \
    customermwidget.ui \
    dialog_login.ui \
    dialog_register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
