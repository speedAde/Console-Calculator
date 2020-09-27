cmake_minimum_required(VERSION 3.18.2)

set(This Tests)

set(Sources
    InputParserTest.cpp
)

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    Calculator
)

add_test(
    NAME ${This}
    COMMAND ${This}
)