cmake_minimum_required(VERSION 4.0.3 FATAL_ERROR)

project(apollo_test CXX)

file(GLOB SOURCES CONFIGURE_DEPENDS
    "libs/apollo/*.cpp"
    "libs/apollo/*/*.cpp"
)

list(APPEND SOURCES test.cpp)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE libs/apollo)