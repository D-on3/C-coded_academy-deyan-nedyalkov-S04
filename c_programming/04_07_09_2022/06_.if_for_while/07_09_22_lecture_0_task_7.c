/*7. Да се изведат първите N числа на една редица (геометрична прогресия), ако са дадени първият
член на редицата и частното между първите два елемента. Да се напише програма.
Числата са на вход.*/



#include <stdio.h>

int main(){


float iNum1=0;
float iNum2=0;
scanf("%f", &iNum1);
scanf("%f", &iNum2);
float iResult=0;
iResult = iNum1 * iNum2; 
for(int i=0 ; i < iNum1;i++){
    
    printf("%.2f  ",iResult);
    iResult+=iNum1 * iNum2;
}

return 0;

}