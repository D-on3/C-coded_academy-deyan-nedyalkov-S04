#include <stdio.h>


/*
Задача 1. Дефиниция и декларация на глобална променлива
extern е ключова дума в С, с която се декларира глобална промелнива, без да се заделя памет за тази променлива. extern се използва,
за да се декларират глобални променливи в .h файлове.
*/

extern int g_nValue; /* global variable declaration */


int main() {

 printf("Global variable = %d \n", g_nValue);
 return 0;
}
int g_nValue = 321; /* global variable definition */