/*
Задача 1. Дефинирайте структура като
потребителски тип. Инициализирайте членовете на
структурата, използвайки новия потребителски тип.
Отпечатайте.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char string[80];
    int num;
}key_t;

int main(){
    key_t newStruct;

    strcpy(newStruct.string,"It is what you get after you remove from the Spartan defense a hundred");
    newStruct.num = 808;
    printf("%s\n", newStruct.string);
    printf("%d", newStruct.num);

}