/*Задача 1. Дефинирайте константи PI, Е, и други с помощта на макроси.
Използвайте ги в кода.*/
#include <stdio.h>

#define PI 3.14
#define E 2.91
#define name "todor"



int main(int argc, const char *argv[]){
    
    printf("%.2f \n",PI);
    printf("%.2lf \n",E);
    printf("%s \n",name);
    return 0;
    }