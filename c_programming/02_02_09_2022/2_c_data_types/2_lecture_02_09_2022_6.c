#include<stdio.h>
/*6. Дефинирайте променливи със стойност -127, 255, 63 498, 4 294 967 292, -9 000
000 000 000 775 845.
Изведете всяка променлива на екрана със printf()*/

int main(){


    short int iVar1 = 122;
    long int iVar2 = 1234;
    double iVar3 = 3556;
    long double iVar4 = 9223372036854775807 ;
    float iVar5 = 3.54554;


    print("%d",sizeof(iVar1));
    print("%d",sizeof(iVar2));
    print("%d",sizeof(iVar3));
    print("%d",sizeof(iVar4));
    print("%d",sizeof(iVar5));
    return 0;

}
