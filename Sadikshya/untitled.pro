QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addproduct.cpp \
    admin.cpp \
    adminmenu.cpp \
    customerregister.cpp \
    customers.cpp \
    deleteproduct.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    modifyproduct.cpp \
    viewproduct.cpp

HEADERS += \
    addproduct.h \
    admin.h \
    adminmenu.h \
    customerregister.h \
    customers.h \
    deleteproduct.h \
    loginpage.h \
    mainwindow.h \
    modifyproduct.h \
    viewproduct.h

FORMS += \
    addproduct.ui \
    admin.ui \
    adminmenu.ui \
    customerregister.ui \
    customers.ui \
    deleteproduct.ui \
    loginpage.ui \
    mainwindow.ui \
    modifyproduct.ui \
    viewproduct.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
