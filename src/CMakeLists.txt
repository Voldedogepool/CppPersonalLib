set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


set(
  EXECUTABLE_OUTPUT_PATH
  ${CMAKE_SOURCE_DIR}/build/bin/${CMAKE_BUILD_TYPE}/
)

# Create executables + Linking the libraries
add_executable(TestConsole TestConsole/main.cpp)
target_link_libraries(TestConsole PRIVATE TechnicalLib)
