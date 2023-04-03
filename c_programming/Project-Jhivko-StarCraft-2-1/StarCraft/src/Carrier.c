#include"Carrier.h"
#include"ErrorHandler.h"

#include<stdbool.h>
#include<stdlib.h>


/**
 * Initialize a new ship of type Carrier.
 * @return pointer to a ship from protoss ship feet, stored in the memory.
 */

protossShip *initCarrier(void){
    
    protossShip *currentCarrier = (protossShip*) calloc (1, sizeof(protossShip));

    exitIfError(currentCarrier, ALLOCATION_ERROR, CURRENT_FUNC_NAME);
    
    currentCarrier->damage = CARRIER_DAMAGE; 
    currentCarrier->health = CARRIER_HEALTH;
    currentCarrier->shield = CARRIER_SHIELD;
    currentCarrier->typeShip = CARRIER;
    
    return currentCarrier;
}


/**
 * Generate finished attack from Carrier.
 * @param Carrier pointer to struct of protoss ship.
 * @param AttackedShip pointer to struct of terran ship.
 * @return bool ALIVE OR DESTROYED.
 */
bool CarrierFinishAttack(protossShip *const carrier, terranShip *const attackedShip)
{
    exitIfError(carrier, NULL_PARAMETER, CURRENT_FUNC_NAME);
    exitIfError(attackedShip, NULL_PARAMETER, CURRENT_FUNC_NAME);

    uint16_t leftInterceptors = carrier->turns_left;
    bool isAttackedShipDestroyed = ALIVE ;

    for (leftInterceptors; leftInterceptors > 0; leftInterceptors--)
    {
        attackedShip->health -= CARRIER_DAMAGE ;

        if(attackedShip->health <= 0 )
        {
            isAttackedShipDestroyed = DESTROYED ;
            carrier->turns_left = 0;
            return isAttackedShipDestroyed;
        }
    }

        carrier->turns_left = 0;
        return isAttackedShipDestroyed;
}

/**
 * Generate Carrier attack
 * @param Carrier pointer to struct of protoss ship.
 * @param AttackedShip pointer to struct of terran ship.
 * @return ALIVE OR DESTROYED.
 */
bool CarrierAttack(protossShip *const carrier, terranShip *const attackedShip)
{
    exitIfError(carrier, NULL_PARAMETER, CURRENT_FUNC_NAME);
    exitIfError(attackedShip, NULL_PARAMETER, CURRENT_FUNC_NAME);
        
    uint16_t interceptors = initInterceptors(carrier);
    bool isAttackedShipDestroyed = ALIVE;

    for ( interceptors; interceptors > 0; interceptors--)
    {
        attackedShip->health -= CARRIER_DAMAGE;

        if(attackedShip->health <= 0)
        {
            isAttackedShipDestroyed = DESTROYED;
            carrier->turns_left = interceptors - 1;
            break;

        }
    }

        regenShield(carrier);
        return isAttackedShipDestroyed;
}

/**
 * Initialization of numbers of interceptors.
 * @param Carrier pointer to struct of protoss ship.
 * @return numbers of interceptors.
 */
uint16_t initInterceptors(protossShip*carrier)
{
    exitIfError(carrier, NULL_PARAMETER, CURRENT_FUNC_NAME);

    if (carrier->health == CARRIER_HEALTH)
    {
        return MAX_INTERCEPTORS;
    }
    else
    {
        return DAMAGED_STATUS_INTERCEPTORS;
    }
}
