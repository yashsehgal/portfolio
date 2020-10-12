cmake_minimum_required(VERSION 3.13)
project(portfolio)

set(CMAKE_CXX_STANDARD 14)

# setting up MathTools Package
set(CMAKE_INCLUDE_PATH / portfolio/src/helpers/details.h)

# setting up the DataFile Tools package
#set(CMAKE_INCLUDE_PATH / portfolio)

#include_directories(rock-paper-scissors-cpp-version game_logic.h)
add_executable(portfolio src/helpers/details.cc)