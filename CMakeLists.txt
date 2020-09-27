cmake_minimum_required(VERSION 3.18.2)

set(This Calculator)

project(${This})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(Headers
)

set(Sources
    src/main.cpp
)

add_executable(calc src/main.cpp)

enable_testing()
add_subdirectory(tests)
add_subdirectory(googletest)
add_library(${This} STATIC ${Sources} ${Headers})
