TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Alumno.cpp \
        AlumnoEspecial.cpp \
        AlumnoLibre.cpp \
        AlumnoNormal.cpp \
        AlumnoVocacional.cpp \
        Curso.cpp \
        main.cpp

HEADERS += \
    Alumno.h \
    AlumnoEspecial.h \
    AlumnoLibre.h \
    AlumnoNormal.h \
    AlumnoVocacional.h \
    Curso.h
