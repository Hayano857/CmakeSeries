cmake_minimum_required(VERSION 3.5)

project(HelloApp
    VERSION 1.0.0
    DESCRIPTION "The leading Hello World App"
    LANGUAGES CXX)

add_executable(HelloAppBinary main.cpp)
target_compile_features(HelloAppBinary PRIVATE cxx_std_20)

