include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS +=     \
    ../app/function.h \
    test.h \
    test_1.h \
    test_2.h \
    test_3.h \
    test_4.h \
    test_5.h \
    test_6.h

SOURCES +=     main.cpp \
    ../app/function.c \
    ../app/checkmove.c


INCLUDEPATH += ../app
