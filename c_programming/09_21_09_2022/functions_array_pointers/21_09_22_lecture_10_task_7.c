/*Задача 7. Напишете функция void reverse(char src[], char dest[]),
която обръща низа char src[ ], като същевременно го копира в char dest[].
Принтирайте двата низа на екрана, за да могат да бъдат сравнени.*/
#include<stdio.h>
#include<string.h>


void reverse(char src[], char dest[])
{

    static char reversed[10] = {};
    int j = 0;
    for (int i = 9; i >= 0; i --)
    {
        reversed[j] = src[i];
        j ++;
    }

    for (int i = 0; i < 10; i ++)
    {
        dest[i] = reversed[i];
    }

    for (int i = 0; i < 10; i ++)
    {
        printf("%c", src[i]);

    }

    printf("\n");
        for (int i = 0; i < 10; i ++)
    {
        printf("%c", dest[i]);

    }

}

int main()
{
    char src[10] = {"hellothere"};
    char dest[10] = {};

    reverse(src, dest);

    return 0;
}
