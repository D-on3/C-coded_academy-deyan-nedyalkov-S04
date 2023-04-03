#ifndef CARRIER_H_
#define CARRIER_H_

#include"Defines.h"
#include"Fleet.h"
#include"ProtossShields.h"

#include<stdbool.h>


protossShip *initCarrier(void);

bool CarrierFinishAttack(protossShip *const carrier, terranShip *const attackedShip);bool CarrierAttack(protossShip *const carrier, terranShip *const attackedShip);

bool CarrierAttack(protossShip *const carrier, terranShip *const attackedShip);

uint16_t initInterceptors(protossShip*carrier);

#endif // CARRIER_H_