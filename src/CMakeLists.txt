cmake_minimum_required(VERSION 3.8)
project(MyLibrary
    VERSION 0.0.1
)

# add dependencies
# find_package(...)

# library definition
add_library(MyLibrary
    MyLibrary.cpp include/MyLibrary/MyLibrary.h
    private.cpp private.h
)
target_compile_features(MyLibrary PUBLIC cxx_std_11)
target_include_directories(MyLibrary
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include>
)
add_library(MyLibrary::MyLibrary ALIAS MyLibrary)
