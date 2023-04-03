#ifndef FLEET_H_
#define FLEET_H_

#include "Defines.h"

#include <stdint.h>

typedef struct {
    int16_t typeShip;
    int16_t damage;  
    int16_t health;
    int16_t turns_made;
} terranShip;

typedef struct {
    int16_t typeShip;
    int16_t damage; 
    int16_t health;
    int16_t shield;
    int16_t turns_left;  
} protossShip;

#endif // FLEET_H_