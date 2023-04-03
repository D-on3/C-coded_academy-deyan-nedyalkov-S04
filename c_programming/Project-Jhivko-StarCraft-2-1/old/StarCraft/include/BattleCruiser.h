#ifndef BATTLECRUISER_H_
#define BATTLECRUISER_H_


#include"Fleet.h"

#include<stdbool.h>
#include<stdlib.h>

terranShip *initBattleCruiser(void);

static bool battleCruiserYamatoCannonAttack(terranShip *const battleCruiser , protossShip *const attackedShip);

bool battleCruiserAttack(terranShip *const battleCruiser, protossShip *const attackedShip);

#endif // BATTLECRUISER_H_