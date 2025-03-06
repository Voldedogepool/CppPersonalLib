# Creating the needed local libraries
file(
GLOB_RECURSE
TechnicalLibCPP
CONFIGURE_DEPENDS
"${CMAKE_SOURCE_DIR}/src/TechnicalLib/*.cpp")

add_library(TechnicalLib ${TechnicalLibCPP})

target_include_directories(
TechnicalLib
PUBLIC
${CMAKE_SOURCE_DIR}/include/TechnicalLib
)
