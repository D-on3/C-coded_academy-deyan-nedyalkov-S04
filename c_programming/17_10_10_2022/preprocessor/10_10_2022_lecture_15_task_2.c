#include <stdio.h>


/*Задача 2. Напишете макрос swap(t, x, y), койтo променя местата на двата
аргумента от тип t.*/


#define swap(t,x,y) t temp = x;x =y ; y =temp; \
printf("Value of x: %d, Value of y: %d",x,y);

int main(int argc, const char *argv[]){


    return 0;
    }