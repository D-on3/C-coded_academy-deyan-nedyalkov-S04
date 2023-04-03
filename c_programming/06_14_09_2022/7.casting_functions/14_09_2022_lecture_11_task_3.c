/*Задача 3. Напишете функция, която връща резултат (а+в)*4.*/
#include <stdio.h>


void Result(void);

int main(){

    Result();
    return 0;
}


void Result(void){
double a,b;
printf("Enter  value for a :");
scanf("%lf", &a);
printf("Enter  value for a :");
scanf("%lf", &b);
double fSum = 0;
fSum = (a +b) * 4;
printf("%.2lf");
}