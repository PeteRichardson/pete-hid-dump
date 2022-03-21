cmake_minimum_required(VERSION 3.18)

project(pete-hid-dump)

add_executable(pete-hid-dump 
    pete-hid-dump/main.c )

    FIND_LIBRARY(IOKIT_LIBRARY IOKit)
    FIND_LIBRARY(FOUNDATION_LIBRARY Foundation)
TARGET_LINK_LIBRARIES( pete-hid-dump ${IOKIT_LIBRARY} ${FOUNDATION_LIBRARY})

