cmake_minimum_required(VERSION 3.16)

# Sets project name
project(lab01 LANGUAGES CXX C)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Sets C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specifies .cpp and .h files to be passed to the compiler
add_executable(${PROJECT_NAME}
  main.cpp
)
