#include <stdio.h>

/*Задача 1. Напишете обединение от три стойности: цяло число, число с плаваща запетая и низ. Инициализирайте 
отделните членове и ги изведете на екрана.*/


union first{
    int a;
    float b;
    char str[10];
};


int main(){


union first trail;
trail.a = 5;
printf("%d",trail.a);
trail.b = 3.14;
printf("%d",trail.b);



}