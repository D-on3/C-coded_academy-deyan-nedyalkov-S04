/*Задача 9. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори)*/

#include <stdio.h>

#define CON(x,y) printf("%s \n",#x "" #y) ;


int main(){

    int a33;
    int a55;
    char *string[6] = {};
    CON(a33,a55);


    return 0;
}