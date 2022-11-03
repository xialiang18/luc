project(compile)
cmake_minimum_required(VERSION 3.16)

set(PROJECT_NAME compile)
set(LIBRARY_NAME luc)
set(LUC_ROOT ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(source/luc)

include_directories(source)

FILE(GLOB_RECURSE SRC tools/compile.cc)

add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} ${LIBRARY_NAME})

if(BUILD_TEST)
    add_subdirectory(test)
endif()

