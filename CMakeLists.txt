cmake_minimum_required(VERSION 3.12)

project(LoggerLib)

add_library(LoggerLib STATIC
    src/Logger.cpp
)

include_directories(LoggerLib include)

