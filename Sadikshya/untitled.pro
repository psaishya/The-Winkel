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
    customermenu.cpp \
    customerregister.cpp \
    customers.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    modifyproduct.cpp \
    viewcustomer.cpp \
    viewproduct.cpp

HEADERS += \
    addproduct.h \
    admin.h \
    adminmenu.h \
    customermenu.h \
    customerregister.h \
    customers.h \
    loginpage.h \
    mainwindow.h \
    modifyproduct.h \
    viewcustomer.h \
    viewproduct.h

FORMS += \
    addproduct.ui \
    admin.ui \
    adminmenu.ui \
    customermenu.ui \
    customerregister.ui \
    customers.ui \
    loginpage.ui \
    mainwindow.ui \
    modifyproduct.ui \
    viewcustomer.ui \
    viewproduct.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
