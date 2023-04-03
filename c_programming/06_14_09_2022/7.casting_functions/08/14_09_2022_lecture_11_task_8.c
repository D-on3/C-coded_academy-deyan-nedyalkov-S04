/*Задача 8.Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин.*/
#include <stdio.h>
#include "f.h"

 
int add(int a, int b);
int incr (int c);

int main(){
    int a,b,resultFromAdd;
    printf("Enter value for a: \n");
    scanf("%d",&a);
    printf("Enter value for b: \n");
    scanf("%d",&b);

    resultFromAdd=add(a,b);
    print("%d",resultFromAdd);
    resultFromAdd=incr(resultFromAdd);
    print("%d",resultFromAdd);

    return 0;
}