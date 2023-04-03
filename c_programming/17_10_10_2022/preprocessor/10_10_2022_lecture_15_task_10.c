/*Задача 10. Напишете макрос, който прави идентификатор на низ
(стринг)*/

#include <stdio.h>
#define string __CHAR_UNSIGNED__ %c




int main(){


    string someString = "Value";
    printf("%s",someString);



    return 0;
}