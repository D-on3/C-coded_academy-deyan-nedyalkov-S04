cmake_minimum_required(VERSION 3.5.1)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake_helpers/helpers_c.cmake)

project(starcraft)

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
     
#generate project binary
add_executable(
    ${PROJECT_NAME}
    ${INC_DIR}/Defines.h
    ${INC_DIR}/Vector.h
    ${INC_DIR}/BattleField.h
    ${INC_DIR}/TerranTurn.h
    ${INC_DIR}/ProtossTurn.h
    ${INC_DIR}/Fleet.h
    ${INC_DIR}/Print.h
    ${INC_DIR}/Utilities.h
    ${INC_DIR}/Viking.h
    ${INC_DIR}/BattleCruiser.h
    ${INC_DIR}/Carrier.h
    ${INC_DIR}/Phoenix.h
    ${INC_DIR}/ProtossShields.h
    ${INC_DIR}/ErrorHandler.h

        
    ${SRC_DIR}/main.c
    ${SRC_DIR}/Vector.c
    ${SRC_DIR}/BattleField.c
    ${SRC_DIR}/TerranTurn.c
    ${SRC_DIR}/ProtossTurn.c
    ${SRC_DIR}/Print.c
    ${SRC_DIR}/Utilities.c
    ${SRC_DIR}/Viking.c
    ${SRC_DIR}/BattleCruiser.c
    ${SRC_DIR}/Carrier.c
    ${SRC_DIR}/Phoenix.c
    ${SRC_DIR}/ProtossShields.c
    ${SRC_DIR}/ErrorHandler.c
    

)

target_include_directories(
    ${PROJECT_NAME} 
        PRIVATE 
            ${INC_DIR}
)  

set_target_c_standard(${PROJECT_NAME} 11)