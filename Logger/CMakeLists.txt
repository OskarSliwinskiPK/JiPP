cmake_minimum_required( VERSION 3.0 )
project( logger )
include_directories( ./include ./src ./libs)
add_executable(${PROJECT_NAME} ./src/main.cpp ./src/Log.cpp ./libs/sqlite3/sqlite3.c)