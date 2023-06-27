cmake_minimum_required(VERSION 3.25)
project(cpp_learning)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpp_learning main.cpp "cpp variables/variables.cpp" "cpp variables/variables.h" "leetcode/roman to integer/romToInt.cpp" "leetcode/roman to integer/romToInt.h" "cpp variables/sizeOfOperator.cpp" "cpp variables/sizeOfOperator.h" "cpp variables/constants.cpp" "cpp variables/constants.h")
