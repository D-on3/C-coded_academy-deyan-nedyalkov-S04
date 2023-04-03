#ifndef VIKING_H_
#define VIKING_H_


#include "Fleet.h"

#include <stdbool.h>



terranShip *initViking(void);

bool vikingAttack (const terranShip *const attackingShip, protossShip *const attackedShip);

static bool vikingAttackPhoenix(const terranShip *const viking, protossShip *const phoenix);

static bool vikingAttackOtherShips(const terranShip *const viking, protossShip *const otherOtherShip);

#endif // VIKING_H_