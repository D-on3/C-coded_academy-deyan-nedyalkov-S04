/*Задача 2. Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг, която
написахме преди малко за да изчислите площта на кръга с този радиус и
върнете резултата: */
#include<stdio.h>
const float pi= 3.14;

void area(void);

int main(){
    
    area();
    return 0;
}


void area(void){

    double r=0;
    printf("Enter a radius\n");
    scanf("%lf", &r);
    double iSum ;
    iSum = pi*(r*r);
    pritnf("%lf", iSum);
    return 0;

}