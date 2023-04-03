#include"Phoenix.h"
#include"ErrorHandler.h"

#include<stdlib.h>
//#include<stdio.h>


/**
 * Initialize a new ship of type Phoenix.
 * @return pointer to a ship from protoss ship feet, stored in the memory.
 */
protossShip *initPhoenix(void)
{
    protossShip *currentPhoenix = (protossShip*) calloc (1, sizeof(protossShip));

    exitIfError(currentPhoenix, ALLOCATION_ERROR, CURRENT_FUNC_NAME);

    currentPhoenix->damage = PHOENIX_DAMAGE ; 
    currentPhoenix->health = PHOENIX_HEALTH ;
    currentPhoenix->shield = PHOENIX_SHIELD;
    currentPhoenix->typeShip = PHOENIX ;
    
    return currentPhoenix ;
}

/**
 * Generate Phoenix attack
 * @param Phoenix pointer to struct of protoss ship.
 * @param AttackedShip pointer to struct of terran ship.
 * @return bool ALIVE OR DESTROYED.
 */
bool phoenixAttack(protossShip *const phoenix, terranShip *const attackedShip)
{
    exitIfError(phoenix, NULL_PARAMETER, CURRENT_FUNC_NAME);
   
    bool statusOfAttackedShip = ALIVE ;

    attackedShip->health -= phoenix->damage;

    if (attackedShip->health <= 0){
            statusOfAttackedShip = DESTROYED ;
    }

    regenShield(phoenix);
    return statusOfAttackedShip;
}
