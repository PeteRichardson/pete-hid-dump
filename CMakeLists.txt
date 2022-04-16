cmake_minimum_required(VERSION 3.18)

project(pete-hid-dump)

add_executable(pete-hid-dump 
    pete-hid-dump/main.c )


FIND_LIBRARY(IOKIT_LIBRARY IOKit)
FIND_LIBRARY(FOUNDATION_LIBRARY Foundation)
SET(EXTRA_LIBS ${IOKIT_LIBRARY} ${FOUNDATION_LIBRARY})

TARGET_LINK_LIBRARIES( pete-hid-dump ${EXTRA_LIBS})

add_executable(IOHIDReportTest 
    IOHIDReportTest/main.c
    IOHIDReportTest/IOHIDReportDescriptorParser.c)

TARGET_LINK_LIBRARIES( IOHIDReportTest ${EXTRA_LIBS})

