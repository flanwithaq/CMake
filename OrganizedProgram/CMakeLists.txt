cmake_minimum_required(VERSION 3.0)

project(Program)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

aux_source_directory(./src/ SRC_LIST)
include_directories(./include/ INCLUDE)

add_executable(
	${PROJECT_NAME}
	${SRC_LIST}
)
