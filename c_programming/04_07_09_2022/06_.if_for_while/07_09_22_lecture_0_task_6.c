/* 6. Да се изведат първите N числа на една редица (аритметична прогресия), ако са дадени
първият член на редицата и разликата между първите два елемента. Да се напише програма.
Числата са на вход.*/

#include <stdio.h>

int main(){


int iNum1=0;
int iNum2=0;
int iNum3=0;
scanf("%d", &iNum1);
scanf("%d", &iNum2);
scanf("%d", &iNum3);
int iSum=0;
iSum = iNum2 - iNum2;
int iResult= 0; 
for(iNum1;iNum1 <= iNum2;iNum1+iNum3){
    iNum1 += iNum3;
    printf("%d  ",iNum1);
}

return 0;

}