QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    plot.cpp \
    qcustomplot.cpp \
    smartcalccontroller.cpp \
    smartcalcmodel.cpp \
    smartcalcview.cpp

HEADERS += \
    plot.h \
    qcustomplot.h \
    smartcalccontroller.h \
    smartcalcmodel.h \
    smartcalcview.h

FORMS += \
    plot.ui \
    smartcalcview.ui
#INCLUDEPATH += $$QT_PROJECT_DIR/QCustomPlot/
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
