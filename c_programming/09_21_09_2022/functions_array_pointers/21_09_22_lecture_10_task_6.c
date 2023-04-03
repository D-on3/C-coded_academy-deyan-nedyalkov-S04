/*Задача 6. Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/
#include<stdio.h>



long long int factorial(num)
{

    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }

}

int main()
{

    printf("%lld\n", factorial(30));
    return 0;
}
