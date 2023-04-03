//Задача 13 Да се изчисли сумата на целите числа в зададен диапазон [a, b] – използване на цикълwhile

#include <stdio.h>



int main(){
int iNumOne=0, iNumTwo=0 ,iSum=0;
scanf("%d %d",&iNumOne ,&iNumTwo);

while(iNumOne <= iNumTwo){
    iSum += iNumOne;
    iNumOne ++;
}

// the mod and type depends on the diapason
printf("%d",iSum);
return 0;
}

/*
int main () {
int nValue = 13;
do {
printf("Value: %d\n", nValue);
nValue ++;
} while( nValue < 20 );
return 0;
}
*/

