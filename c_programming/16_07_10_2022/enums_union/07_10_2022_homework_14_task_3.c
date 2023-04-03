#include <stdio.h>
/*Задача 3. Дефинирайте структура, която да се състои от цели числа, битови
полета и union. Попълнете всички елементи на структурата, като използвате
операторите “.” и “->” за достъп до елементите. Разпечатайте отделните
елементи, както и размера на структурата.*/



struct main_Struct
{
    int a;
    union some_union
    {
        int c;
        float d;
    };
 
    struct bites
    {
        unsigned char e:1;
        unsigned char f:1;
    } bit;
 
};
 
int main()
{
 
    struct main_Struct obj;
    obj.a = 30;
    union some_union un;
 
    un.c = 20;
    printf("Value of nested union member c: %d\n", un.c);
    un.d = 10;
 
    obj.bit.e = 0;
    obj.bit.f = 0;
 
    printf("Value of outter struct member a: %d\n", obj.a);
    printf("Value of nested union member d: %.2f\n",un.d);
    printf("Value of nested bit field member e: %d\n", obj.bit.e);
    printf("Value of nested bit filed member f: %d\n",obj.bit.f);
    printf("Size of nested bit field: %d\n", sizeof(obj.bit));
 
 
    return 0;
}