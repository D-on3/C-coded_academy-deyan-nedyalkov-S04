#include<stdio.h>

/*
write 4 bites of memmory with the value 00xAA(10101010)
print the value of the bites if the type is float signet int unsined int
*/


int main(){

    signed int a ;
    a= 0xAA;
    float  b ;
    b = 0xAA;
    unsigned int u = 0xAA;
    printf("%f \n  %d \n %u",a,b,u);
    return 0 ;


}
