#ifndef PHOENIX_H_
#define PHOENIX_H_


#include"ProtossShields.h"
#include"Fleet.h"

#include<stdbool.h>

protossShip *initPhoenix(void);

bool phoenixAttack(protossShip *const phoenix, terranShip *const attackedShip);

#endif // PHOENIX_H_