cmake_minimum_required(VERSION 3.00)
project(project_name C)
set(CMAKE_C_STANDARD 99)
#the flag should be corresponding to the included header files
#EXMPL: -lm for <math.h>
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pthread")
include_directories(HEADER_FILES)
file(GLOB MAIN
        "src/*.c"
        "include/*.h"
    )
    add_executable(executable ${MAIN})
