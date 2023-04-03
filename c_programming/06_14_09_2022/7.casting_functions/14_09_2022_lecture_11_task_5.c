/*Задача 5. Напишете програма на С, която чрез функция проверява дали
дадено число е четно или не*/
#include <stdio.h>

void OddOrEven(int a);


int main(){

    OddOrEven(4);
    return 0;
}



void OddOrEven(int a ){
int a ;
printf("Enter value for a :");
scanf("%d",&a);
//printf("Enter value for b :");
//scanf("%d",&b);
if(a % 2 == 0){printf("Even: %d",a);}
else  {printf("Odd: %d", a);}
}

