cmake_minimum_required(VERSION 3.0.0)
project(C_EXE VERSION 0.1.0 LANGUAGES C)

include(CTest)
enable_testing()

add_executable(c_exe src/double_list.c)


target_link_libraries(c_exe m)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(CMAKE_BUILD_TYPE Debug)
include(CPack)
