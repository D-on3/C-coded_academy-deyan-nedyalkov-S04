/*Задача 7. Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти.*/


#include "task_7.h"
#include <stdio.h>


int printAddOn3(int a){
    return 1 + a;
}



int main(){

    int a =5 ;
    int b = printAddOn3(5);
    printf("Result %d \n",b);


    return 0;
}