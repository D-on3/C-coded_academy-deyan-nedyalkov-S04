/*Задача 3. Реализирайте условна 
компилация в зависимост от макрос DEBUG*/
#include <stdio.h>


#define DEBUG printf("Error massage\n");


int main(){


    DEBUG
    #undef DEBUG
    #ifdef DEBUG
     DEBUG
     #endif

    return 0;
}

