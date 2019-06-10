TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Empleado.cpp \
        EmpleadoNormal.cpp \
        EmpleadoVendedor.cpp \
        Empresa.cpp \
        EncargadoDpto.cpp \
        Oracion.cpp \
        VectorDinamico.cpp \
        main.cpp

HEADERS += \
    Empleado.h \
    EmpleadoNormal.h \
    EmpleadoVendedor.h \
    Empresa.h \
    EncargadoDpto.h \
    Oracion.h \
    VectorDinamico.h
