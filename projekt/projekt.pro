QT += core gui
QT += widgets
CONFIG += c++11 console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        src/account.cpp \
        src/accountdatabase.cpp \
        src/accountlist.cpp \
        src/accountloader.cpp \
        src/book.cpp \
        src/booklist.cpp \
        src/booktxt.cpp \
        src/librarywindow.cpp \
        src/loader.cpp \
        src/main.cpp \
        src/menu.cpp \
        src/registrationwindow.cpp \
        src/mainwindow.cpp

DISTFILES += \
    src/AccountDataBase.txt \
    src/a.exe \
    src/library.txt \
    src/main.exe

HEADERS += \
    src/account.hpp \
    src/accountdatabase.hpp \
    src/accountlist.hpp \
    src/accountloader.hpp \
    src/book.hpp \
    src/booklist.hpp \
    src/booktxt.hpp \
    src/librarywindow.hpp \
    src/loader.hpp \
    src/mainwindow.hpp \
    src/menu.hpp \
    src/registrationwindow.hpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    src/librarywindow.ui \
    src/mainwindow.ui \
    src/registrationwindow.ui
