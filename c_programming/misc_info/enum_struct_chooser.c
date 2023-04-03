#include <stdio.h>
#include<stdlib.h>
#

typedef struct {
    uint16_t typeShip;
    int damage;  
    int health;
    int turns_made;
} terranShip;

typedef struct {
    int typeShip;
    int damage; 
    int health;
    int shield;
    int turns_left;  
} protossShip;



enum races{
    TERRAN,
    PROTOSS,
};


void shipDestroying(void **shipBeenDestroyed, int raceOfShipBeenDestroyed, Vector *fleetOfDestroyedShip)
{


    switch (raceOfShipBeenDestroyed)
    {
        case TERRAN:  free(*((terranShip **)shipBeenDestroyed));
            break;
        case PROTOSS: free(*((protossShip **)shipBeenDestroyed));
            break;
        default:      break; // error
    }

    *shipBeenDestroyed = NULL;
    printf("In shipDestroying %p\n", *shipBeenDestroyed);
    vectorPop(fleetOfDestroyedShip);
}