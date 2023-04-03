#include "ProtossTurn.h"
#include "Phoenix.h"
#include "Carrier.h"
#include "Fleet.h"
#include "ErrorHandler.h"
#include "Print.h"



/**
 * Traces the attack of evey protoss fleet ship.
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @return bool ALIVE OR DESTROYED.
 */
bool processProtossTurn(BattleField *const battleField)
{
  exitIfError(battleField, NULL_PARAMETER, CURRENT_FUNC_NAME);

  bool statusOfAttackedShip = ALIVE;
  bool carrierDestroyedEnemyShip = false;
  
  for (size_t idxOfAttackingShip = 0; idxOfAttackingShip < battleField->protossFleet.size; idxOfAttackingShip++)
  {
    carrierDestroyedEnemyShip = false;
    
    if (vectorIsEmpty(&battleField->terranFleet))
    {
      return true;
    }

    protossShip *currentAttackingShip = vectorGet(&battleField->protossFleet, idxOfAttackingShip);
    exitIfError(currentAttackingShip, NULL_PARAMETER, CURRENT_FUNC_NAME);

    terranShip* currentAttackedShip = vectorBack(&battleField->terranFleet);
    exitIfError(currentAttackedShip, NULL_PARAMETER, CURRENT_FUNC_NAME);

    if (currentAttackingShip->typeShip == CARRIER)
    {
      statusOfAttackedShip = CarrierAttack (currentAttackingShip, currentAttackedShip);
      
      if (statusOfAttackedShip == DESTROYED && !carrierDestroyedEnemyShip)
      {
        carrierDestroyedEnemyShip = true;
        printReportForDestroyedShip(currentAttackingShip->typeShip,
                                idxOfAttackingShip,
                                &battleField->terranFleet);
        destroyTerranShip(battleField, &currentAttackedShip);    
      }
      
      if (vectorIsEmpty(&battleField->terranFleet))
      {
        return true;
      }

      if (currentAttackingShip->turns_left > 0 )
      {
        if (statusOfAttackedShip == DESTROYED)
        {
          currentAttackedShip = vectorBack(&battleField->terranFleet);
          statusOfAttackedShip = ALIVE;
        }

        statusOfAttackedShip = CarrierFinishAttack(currentAttackingShip, currentAttackedShip);
      } 
    }
    else if (currentAttackingShip->typeShip == PHOENIX)
    {
     statusOfAttackedShip = phoenixAttack(currentAttackingShip, currentAttackedShip);
    }

    if (statusOfAttackedShip == DESTROYED && !carrierDestroyedEnemyShip)
    {
      printReportForDestroyedShip(currentAttackingShip->typeShip,
                  idxOfAttackingShip,
                  &battleField->terranFleet);
      destroyTerranShip(battleField, &currentAttackedShip);
    }
  }
  
  terranShip* rearTerranShip = vectorBack(&battleField->terranFleet);
  
  bool isEnemiesFleetDestroyed = vectorIsEmpty(&battleField->terranFleet);

  if (isEnemiesFleetDestroyed == DESTROYED)
  {
    return true;
  }
  else
  {
    printReportAfterProtossProcess(rearTerranShip , vectorGetSize(&battleField->terranFleet) - 1);
  }

  return false;
}


/** 
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @param shipToDestroy pointer to struct terranShip.
 */
void destroyTerranShip(BattleField *const battleField, terranShip **shipToDestroy)
{
  exitIfError(battleField, NULL_PARAMETER, CURRENT_FUNC_NAME);
  exitIfError(shipToDestroy, NULL_PARAMETER, CURRENT_FUNC_NAME);

  free(*shipToDestroy);
  *shipToDestroy = NULL;
  vectorPop(&battleField->terranFleet);
}