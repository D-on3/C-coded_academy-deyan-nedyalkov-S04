/*Задача 4. Напишете функция, която връща резултат a*2 + b*c*/

#include <stdio.h>




double Result(void);

int main(){

    double returned = Result();
    return 0;
}


double Result(void){
double a,b;
printf("Enter  value for a :");
scanf("%lf", &a);
printf("Enter  value for a :");
scanf("%lf", &b);
double fSum = 0;
fSum = (a*2)+(b*2);
return fSum;
}