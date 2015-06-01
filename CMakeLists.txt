CMAKE_MINIMUM_REQUIRED(VERSION 2.6)


project(DATL C CXX)


#########gtest##############
ADD_SUBDIRECTORY(gtest-1.7.0)
enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


set(CMAKE_CXX_COMPILER "g++")

set(CMAKE_CXX_FLAGS "--std=c++11 ${CMAKE_CXX_FLAGS}")

ADD_SUBDIRECTORY(src)
ADD_SUBDIRECTORY(test)
