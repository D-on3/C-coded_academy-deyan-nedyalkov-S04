#ifndef BATTLEFIELD_H_
#define BATTLEFIELD_H_

#include "Vector.h"
#include "Fleet.h"
#include "ErrorHandler.h"

#include <stdbool.h>

typedef struct {
  Vector terranFleet;
  Vector protossFleet;
} BattleField;

void generateTerranFleet(BattleField *battleField, const char *terranFleetStr);

void generateProtossFleet(BattleField *const battleField, const char *protossFleetStr);

void startBattle(BattleField *const battleField);

void deinit(BattleField *const battleField);


#endif /* BATTLEFIELD_H_ */
