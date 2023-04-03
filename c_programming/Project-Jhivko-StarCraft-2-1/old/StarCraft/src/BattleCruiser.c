#include"BattleCruiser.h"
#include "ErrorHandler.h"


/**
 * Initialize a new ship of type Battle cruiser.
 * @return pointer to a ship from terran ship feet, stored in the memory.
 */
terranShip *initBattleCruiser(void)
{
    terranShip *currentBattleCruiser = (terranShip*) calloc(1, sizeof(terranShip));

    exitIfError(currentBattleCruiser, ALLOCATION_ERROR, CURRENT_FUNC_NAME);

    currentBattleCruiser->damage = BATTLE_BRUSER_DAMAGE;
    currentBattleCruiser->health = BATTLE_CRUSER_HEALTH;
    currentBattleCruiser->turns_made = 0;
    
    return currentBattleCruiser ;
}

/**
 * Generate Yamato Cannon Attack from Battle cruiser
 * @param BattleCruiser pointer to struct of terran ship.
 * @param AttackedShip pointer to struct of protoss ship.
 * @return bool Alive or Destroyed.
 */
static bool battleCruiserYamatoCannonAttack(terranShip *const battleCruiser, protossShip *const attackedShip)
{
    exitIfError(battleCruiser, NULL_PARAMETER, CURRENT_FUNC_NAME);
    exitIfError(attackedShip, NULL_PARAMETER, CURRENT_FUNC_NAME);

    bool statusOfAttackedShip = ALIVE ;

    if (attackedShip->shield > 0)
    {
        attackedShip->shield -= (battleCruiser->damage * 5);

        if (attackedShip->shield < 0)
        {
          attackedShip->health += attackedShip->shield ;
          attackedShip->shield = 0 ;
        }
    }
    else
    {
        attackedShip->health -= (battleCruiser->damage * 5);
    }

    if (attackedShip->health <= 0)
    {   attackedShip->health = 0;
        statusOfAttackedShip= DESTROYED ;
    }
        battleCruiser->turns_made = 0;

        return statusOfAttackedShip;     
}

/**
 * Generate Battle cruiser attack
 * @param BattleCruiser pointer to struct of terran ship.
 * @param AttackedShip pointer to struct of protoss ship.
 * @return bool Alive or Destroyed.
 */
bool battleCruiserAttack(terranShip *const battleCruiser, protossShip *const attackedShip)
{
    exitIfError(battleCruiser, NULL_PARAMETER, CURRENT_FUNC_NAME);
    exitIfError(attackedShip, NULL_PARAMETER, CURRENT_FUNC_NAME);
    
    bool statusOfAttackedShip = ALIVE ; 

    if(battleCruiser->turns_made == YAMATO_CANNON_LOADING_TURNS)
    {
        statusOfAttackedShip = battleCruiserYamatoCannonAttack(battleCruiser ,attackedShip);

        return statusOfAttackedShip;   
    }
    else
    {
        if (attackedShip->shield > 0)
        {
            attackedShip->shield -= battleCruiser->damage;

            if (attackedShip->shield <= 0)
            {
                attackedShip->health += attackedShip->shield ;
                attackedShip->shield = 0 ;
            }
        }
        else
        {
            attackedShip->health -= battleCruiser->damage;
        }
    }

    if (attackedShip->health <= 0)
    {   attackedShip->health = 0;
        statusOfAttackedShip = DESTROYED ;
    }

    battleCruiser->turns_made ++;
    
    return statusOfAttackedShip ;   
}

