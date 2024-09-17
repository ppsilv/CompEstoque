QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    config.cpp \
    frm_armario.cpp \
    frm_categoria.cpp \
    frm_componente.cpp \
    geral.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    config.h \
    frm_armario.h \
    frm_categoria.h \
    frm_componente.h \
    geral.h \
    mainwindow.h

FORMS += \
    frm_armario.ui \
    frm_categoria.ui \
    frm_componente.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
