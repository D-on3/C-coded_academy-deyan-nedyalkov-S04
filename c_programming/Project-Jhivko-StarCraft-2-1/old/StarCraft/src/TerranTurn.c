#include "TerranTurn.h"

#include "BattleCruiser.h"
#include "Viking.h"
#include "Fleet.h"
#include "ErrorHandler.h"
#include "Print.h"

/**
 * Traces the attack of evey terran fleet ship.
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @return bool ALIVE OR DESTROYED.
 */
bool processTerranTurn(BattleField *battleField)
{
  exitIfError(battleField, NULL_PARAMETER, CURRENT_FUNC_NAME);

  for (size_t idxOfAttackingShip = 0; idxOfAttackingShip < battleField->terranFleet.size; idxOfAttackingShip++)
  {
    if (vectorIsEmpty(&battleField->protossFleet))
    {
      return true;
    }

    terranShip *currentAttackingShip = vectorGet(&battleField->terranFleet, idxOfAttackingShip);
    exitIfError(currentAttackingShip, NULL_PARAMETER, CURRENT_FUNC_NAME);

    protossShip *currentAttackedShip = vectorBack(&battleField->protossFleet);
    exitIfError(currentAttackedShip, NULL_PARAMETER, CURRENT_FUNC_NAME);
 
    bool statusOfAttackedShip = ALIVE;
 
    switch(currentAttackingShip->typeShip)
    {
      case BATTLE_CRUSER: statusOfAttackedShip = battleCruiserAttack(currentAttackingShip, currentAttackedShip);
                          break;
      case VIKING:        statusOfAttackedShip = vikingAttack(currentAttackingShip, currentAttackedShip);
                          break;
      default:            printError(INVALID_TYPE_SHIP, CURRENT_FUNC_NAME);
                          exit(EXIT_FAILURE);
                          break;
    }

    if (statusOfAttackedShip == DESTROYED)
    {
      printReportForDestroyedShip(currentAttackingShip->typeShip,
                  idxOfAttackingShip ,
                  &battleField->protossFleet);
 
      destroyProtossShip(battleField, &currentAttackedShip);
    }
  }
  
  protossShip *rearProtossShip = vectorBack(&battleField->protossFleet);

  
  bool isEnemiesFleetDestroyed = vectorIsEmpty(&battleField->protossFleet);
  
  if (isEnemiesFleetDestroyed == DESTROYED)
  {
    return true;
  }
  else
  {
    printReportAfterTerranProcess(rearProtossShip, vectorGetSize(&battleField->protossFleet) - 1);
  }
 
  return false;
}


/** 
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @param shipToDestroy pointer to struct terranShip.
 */
void destroyProtossShip(BattleField *const battleField, protossShip **shipToDestroy)
{
  exitIfError(battleField, NULL_PARAMETER, CURRENT_FUNC_NAME);
  exitIfError(shipToDestroy, NULL_PARAMETER, CURRENT_FUNC_NAME);
  
  free(*shipToDestroy);
  *shipToDestroy = NULL;
  vectorPop(&battleField->protossFleet);
}