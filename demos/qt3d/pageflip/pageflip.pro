TEMPLATE = app
TARGET = pageflip
CONFIG += qt warn_on

CONFIG += qt3d_deploy_pkg
include(../../../pkg.pri)

SOURCES = pageflip.cpp pageflipmath.cpp
HEADERS = pageflipmath_p.h
RESOURCES = pageflip.qrc

OTHER_FILES += \
    pageflip.rc \
    pageflip.desktop

RC_FILE = pageflip.rc

