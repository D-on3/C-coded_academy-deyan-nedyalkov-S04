#include <stdio.h>
/* 9. Напишете програма, която разменя две числа, използвай указатели. */

int main()
{
    int a = 0;
    int b = 0;
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);
    int *p1 = &a;
    int *p2 = &b;
    int c = a;
    int *p3 = c;
    a = *p2;
    printf("B is: %d\n", b);
    printf("P3 is: %d\n", *p3);


    return 0;
}