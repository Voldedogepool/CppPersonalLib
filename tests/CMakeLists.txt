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

add_executable( PersonalLibTestAll ${TechnicalLibTestCPP} )

target_link_libraries(
PersonalLibTestAll
PRIVATE
TechnicalLib
GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests( PersonalLibTestAll )
