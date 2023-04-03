/*Задача 6. Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.*/
#include <stdio.h>


void inBinary(int number);

int main(){
    int a ;
    printf("Enter number: \n");
    scanf("%d",&a);
    return 0;
}


void inBinary(int number) //function to print binnary numbers
{
    unsigned i;
    for (i = 1 << 7; i > 0; i = i >> 1)
        (number & i) ? printf("1") : printf("0");
    printf("\n");
}
