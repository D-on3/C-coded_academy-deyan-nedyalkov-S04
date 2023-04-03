#ifndef PRINT_H_
#define PRINT_H_
 

#include "Fleet.h"

#include "Vector.h"

void printReportForDestroyedShip(const size_t attackingShip,
                                 const size_t idxOfAttackingShip ,
                                 const Vector *const enemiesFleet);

char *shipType(const uint8_t shipToPrint);

void printReportAfterTerranProcess(const protossShip *const enemiesFleet, const size_t EnemyAirShipId);

void printReportAfterProtossProcess(const terranShip *const enemiesFleet, const size_t EnemyAirShipId);
 
#endif // PRINT_H_