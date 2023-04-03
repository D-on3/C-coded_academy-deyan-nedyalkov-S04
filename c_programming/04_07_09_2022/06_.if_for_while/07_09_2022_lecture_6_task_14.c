
/*Задача 14 Напишете програма на C, която прочита едно цяло число и като използва цикъл
do while, намира и извежда броят на цифрите му.*/
#include <stdio.h>

int main(){
    int a, b;
    printf("a=\n");scanf("%d", &a);
    printf("b=\n");scanf("%d", &b);

    int x = a;
    long int sum = 0;

    while (x <= b)
    {

        sum += x;
        x++;
    }
    printf("sum =%li", sum);
    return 0;
}