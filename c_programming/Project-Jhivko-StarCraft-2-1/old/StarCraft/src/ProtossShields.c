#include "ProtossShields.h"
#include "ErrorHandler.h"


/**
 * Regenerate protoss ship shields.
 * @param ProtossShip pointer to a ship from protoss ship feet.
 */
 void regenShield(protossShip *const ship)
 {
    uint16_t shieldMaxShield = 0;
    uint16_t regenerateShieldRate = 0;

    switch (ship->typeShip)
    {
        case PHOENIX:   shieldMaxShield = PHOENIX_SHIELD;
                        regenerateShieldRate = PHOENIX_SHIELD_REGENERATE_RATE;
                        break;
        case CARRIER:   shieldMaxShield = CARRIER_SHIELD;
                        regenerateShieldRate = CARRIER_SHIELD_REGENERATE_RATE;
                        break;
        default:        break;
    }

    if (ship->shield < shieldMaxShield)
    {
        ship->shield += regenerateShieldRate;
    }

    if (ship->shield > shieldMaxShield)
    {
        ship->shield = shieldMaxShield;
    }
}