project ("MyMATLABProject")

cmake_minimum_required(VERSION 2.8)

include(cmake/FindMATLAB.cmake)
include(cmake/FindMatlabMex.cmake)
include(cmake/UseMatlabMex.cmake)

find_package(Matlab REQUIRED)

add_subdirectory(src)
