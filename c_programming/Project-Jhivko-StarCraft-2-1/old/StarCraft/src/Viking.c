#include "Defines.h"
#include "Viking.h"
#include "ErrorHandler.h"
//#include "Fleet.h"

#include <stdlib.h>


/**
 * Initialize a new ship type Viking.
 * @return pointer to a ship from terran ship feet, stored in the memory.
 */
terranShip *initViking(void)
{
    terranShip *currentViking = (terranShip*) calloc (1, sizeof(terranShip));
    
    exitIfError(currentViking, ALLOCATION_ERROR, CURRENT_FUNC_NAME);

    currentViking->damage = VIKING_DAMAGE ;
    currentViking->health = VIKING_HEALTH ;
    currentViking->typeShip = VIKING ;

    return currentViking ;
}


/**
 * Generate Viking attack 
 * @param AttackingShip pointer to struct of terran ship.
 * @param AttackedShip pointer to struct of protoss ship.
 * @return bool Alive or Destroyed.
 */
bool vikingAttack(const terranShip *const attackingShip, protossShip *const attackedShip)
{
    bool statusOfAttackedShip = ALIVE ; 
    if (attackedShip->typeShip == PHOENIX)
    {
        statusOfAttackedShip = vikingAttackPhoenix(attackingShip, attackedShip); 
    }
    else
    {
        statusOfAttackedShip = vikingAttackOtherShips(attackingShip, attackedShip);
    }

    return statusOfAttackedShip ;   
}


/**
 * Generate Viking attack agains Phoenix
 * @param Viking pointer to struct of terran ship.
 * @param Phoenix pointer to struct of protoss ship.
 * @return bool Alive or Destroyed.
 */
static bool vikingAttackPhoenix(const terranShip *const viking, protossShip *const phoenix)
{
    if (phoenix->shield > 0)
    {
        phoenix->shield -= viking->damage * 2;

        if (phoenix->shield <= 0)
        {
            phoenix->health += phoenix->shield ;
            phoenix->shield = 0; 
        } 
    }
    else
    {
        phoenix->health -= viking->damage * 2;
    }

    if (phoenix->health <= 0)
    {
        return DESTROYED ;
    }

    return ALIVE ;  
}


/**
 * Generate Viking attack agains other type of ships different from Phoenix 
 * @param Viking pointer to struct of terran ship.
 * @param Carrier pointer to struct of protoss ship.
 * @return bool ALIVE OR DESTROYED.
 */
static bool vikingAttackOtherShips(const terranShip *const viking, protossShip *const otherShip)
{
    if (otherShip->shield > 0)
    {
        otherShip->shield -= viking->damage;

        if (otherShip->shield <= 0)
        {
            otherShip->health += otherShip->shield ;
            otherShip->shield = 0;
        } 
    }

    else
    {
        otherShip->health -= viking->damage;
        otherShip->shield = 0;
    }
    
    if (otherShip->health <= 0)
    {
        return DESTROYED ;
    }

    return ALIVE ;  
}