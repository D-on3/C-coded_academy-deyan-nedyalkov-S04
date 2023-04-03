/*Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо.*/
#include <stdio.h>


#define DEBUG printf("Error massage\n");


void printAddOn3(int a){
    return 1 + a;
}

int main(){


    DEBUG
    #undef DEBUG
    #ifdef DEBUG
     DEBUG
     #endif

    return 0;
}