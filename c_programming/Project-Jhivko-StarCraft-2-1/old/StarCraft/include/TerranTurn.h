#ifndef TERRAN_TURN_H_
#define TERRAN_TURN_H_
#include "BattleField.h"
#include "Viking.h"
#include "BattleCruiser.h"
#include "Fleet.h"

bool processTerranTurn(BattleField *battleField);

void destroyProtossShip(BattleField *const battleField, protossShip **shipToDestroy);
#endif /* TERRAN_TURN_H_ */