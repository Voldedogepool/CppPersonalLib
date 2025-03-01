include(AddGoogleTest)

set(
  EXECUTABLE_OUTPUT_PATH
  ${CMAKE_SOURCE_DIR}/build/bin/Test/${CMAKE_BUILD_TYPE}/
)

file(
GLOB_RECURSE
TechnicalLibTestCPP
CONFIGURE_DEPENDS
"TechnicalLibTest/*.cpp")

add_executable( TestAll ${TechnicalLibTestCPP} )

target_link_libraries(
TestAll
PRIVATE
TechnicalLib
GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests( TestAll )
