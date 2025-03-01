cmake_minimum_required(VERSION 3.31)

project(CppPersonalLib)

#Enable testing of the cmake
enable_testing()

#Use the cmake module
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

#Add Local Libraries
include(AddLocalLibraries)

#Adding the different needed subdirectories
add_subdirectory(src)
add_subdirectory(tests)
