#include "BattleField.h"
#include "TerranTurn.h"
#include "ProtossTurn.h"
#include "Fleet.h"
#include "Print.h"
//#include "Viking.h"
//#include "Phoenix.h"
//#include "Carrier.h"
//#include "BattleCruiser.h"

#include <stdio.h>
#include <string.h> 

/**
 * Generate fleet of terran ships 
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @param terranInput strings with fleet data.
 */
void generateTerranFleet(BattleField *battleField, const char *terranFleetStr)
{
  exitIfError(battleField, NULL_PARAMETER, CURRENT_FUNC_NAME);
  exitIfError(terranFleetStr, NULL_PARAMETER, CURRENT_FUNC_NAME);

  int terranFleetLen = strlen(terranFleetStr);
  vectorInit(&battleField->terranFleet, terranFleetLen);
 
  while (*terranFleetStr != '\0')
  {
    if (*terranFleetStr == 'v')
    {
      vectorPush(&battleField->terranFleet, initViking());
    }
     else if (*terranFleetStr == 'b')
    {
      vectorPush(&battleField->terranFleet, initBattleCruiser());
    }
    terranFleetStr++;
  }
}


/**
 * Generate fleet of protoss ships 
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 * @param protossInput strings with fleet data.
 */ 
void generateProtossFleet(BattleField *const battleField, const char *protossFleetStr)
{ 
  exitIfError(battleField, NULL_PARAMETER, CURRENT_FUNC_NAME);
  exitIfError(protossFleetStr, NULL_PARAMETER, CURRENT_FUNC_NAME);
  
  int stelen = strlen(protossFleetStr);
  vectorInit(&battleField->protossFleet, stelen);
 
  while (*protossFleetStr != '\0')
  {
    if (*protossFleetStr == 'p')
    {
      vectorPush(&battleField->protossFleet, initPhoenix());
    }
      else if (*protossFleetStr == 'c')
    {
       vectorPush(&battleField->protossFleet, initCarrier());
    } 
    protossFleetStr++;
  }
}
 
void startBattle(BattleField *const battleField)
{
  exitIfError(battleField, NULL_PARAMETER, CURRENT_FUNC_NAME);

  while (true)
  {
    if (processTerranTurn(battleField))
    {
      printf("TERRAN has won!\n");
      break;
    }
 
    if (processProtossTurn(battleField))
    {
      printf("PROTOSS has won!\n");
      break;
    }
  }
}


/**
 * Free memory for battlefield and fleets 
 * @param battleField pointer to struct of Battlefield with Vector terranfleet and Vector protossfleet.
 */
void deinit(BattleField *const battleField)
{
  exitIfError(battleField, NULL_PARAMETER, CURRENT_FUNC_NAME);

  if (!vectorIsEmpty(&battleField->protossFleet))
  {
    for (size_t i = 0; i < vectorGetSize(&battleField->protossFleet); i++)
    {
      free(battleField->protossFleet.items[i]);
      battleField->protossFleet.items[i] = NULL;
    }
  }

  if (!vectorIsEmpty(&battleField->terranFleet))
  {
    for (size_t i = 0; i < vectorGetSize(&battleField->terranFleet); i++)
    {
      free(battleField->terranFleet.items[i]);
      battleField->terranFleet.items[i] = NULL;
    }
  }

  vectorFree(&battleField->protossFleet);
  vectorFree(&battleField->terranFleet);
}