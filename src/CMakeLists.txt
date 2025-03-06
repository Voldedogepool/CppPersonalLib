set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


set(
  EXECUTABLE_OUTPUT_PATH
  ${CMAKE_SOURCE_DIR}/build/bin/${CMAKE_BUILD_TYPE}/
)

# Create executables + Linking the libraries
add_executable(PersonalLibTestConsole PersonalLibTestConsole/main.cpp)
target_link_libraries(PersonalLibTestConsole PRIVATE TechnicalLib)
