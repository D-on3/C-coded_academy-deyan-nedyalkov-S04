#include<stdio.h>

/*
write 8 bites of memmory with the value 00xAA(10101010)
print the value of the bites if the type is float signet int unsined int
*/

int main(){


double a;
a= 0xBB;
signed long long  b;
b = 0xBB;
unsigned long long u = 0xBB;
printf("%lf \n  %lld \n %llu",a,b,u);
return 0;


}
