TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cc \
    fileinterface.cc \
    ui.cc

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    fileinterface.hh \
    ui.hh

