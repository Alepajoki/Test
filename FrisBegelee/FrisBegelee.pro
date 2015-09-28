TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cc

include(deployment.pri)
qtcAddDeployment()

