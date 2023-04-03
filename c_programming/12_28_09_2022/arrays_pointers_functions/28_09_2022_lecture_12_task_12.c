#include <stdio.h>
/*12. Напишете примерна програма, която връща няколко стойности от функция, 
използвайки указател.*/

int *func()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    int *p1 = &num1;
    int *p2 = &num2;
    int *p3 = &num3;

    return *p1, *p2, *p3;

}

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    num1, num2, num3 = *func();
    printf("%d %d %d\n", num1, num2, num3);

    return 0;
}