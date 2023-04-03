#ifndef PROTOSS_TURN_H_
#define PROTOSS_TURN_H_
#include "BattleField.h"
#include "Phoenix.h"
#include "Carrier.h"
#include "Fleet.h"

bool processProtossTurn(BattleField *const battleField);

void destroyTerranShip(BattleField *const battleField, terranShip **shipToDestroy);

#endif /* PROTOSS_TURN_H_ */