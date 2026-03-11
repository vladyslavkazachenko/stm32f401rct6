cmake_minimum_required(VERSION 3.15)

project(stm32f401rct6)

add_library(${PROJECT_NAME} INTERFACE)
target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
install(TARGETS ${PROJECT_NAME})
