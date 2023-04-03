/*Задача 9. Напишете три функции, които да правят изчисление по ваш
избор и да се извикват по следния начин:
 Main вика Ф1;
 Ф1 вика Ф 2;
 Ф2 вика Ф3;
Изнесете прототипите им в отделен .h файл*/
#include <stdio.h>
#include "theFunc.h"


int addTwo(int a ,int b);
int substractTwo(int a ,int b);
int devideTwo(int a ,int b);



int main(){
int a ,b,iResult ;
printf("Enter values for a and b :");
scanf("%d %d",&a,&b);
iResult =addTwo(a,b);
printf("Result frim F1 :%d",iResult);
iResult =0;
iResult = substractTwo(a,b);
printf("Result frim F2 :%d",iResult);
iResult =0;
iResult = devideOne(a,b);
printf("Result frim F3 :%d",iResult);



    return 0;
}