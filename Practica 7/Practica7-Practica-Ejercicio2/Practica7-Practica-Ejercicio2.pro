TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CalculoGasto.cpp \
        Gasto.cpp \
        GastoCompra.cpp \
        GastoExtraordinario.cpp \
        GastoServicio.cpp \
        main.cpp

HEADERS += \
    CalculoGasto.h \
    GastoCompra.h \
    GastoExtraordinario.h \
    GastoServicio.h \
    gasto.h
