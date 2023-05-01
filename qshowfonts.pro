cache

TEMPLATE = app

TARGET = qshowfonts

QT += core gui widgets

CONFIG += release

unix {
	target.path = /usr/local/bin
	INSTALLS += target
}

INCLUDEPATH += GeneratedFiles
MOC_DIR = GeneratedFiles
OBJECTS_DIR = Objects
UI_DIR = GeneratedFiles
RCC_DIR = GeneratedFiles

HEADERS += qshowfonts.h

SOURCES += main.cpp qshowfonts.cpp

FORMS += qshowfonts.ui
