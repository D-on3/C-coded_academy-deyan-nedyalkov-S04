#include <stdio.h>

/*3. Съберете signed char a = -10 с unsigned char z = 0 тип.*/


int main(void){


unsigned char z = 0;
bin(z);
printf("%d", z);
signed char a = -10;
printf("%d", a);
bin(a);
z = z + a;
printf("%d\n", z);
bin(z);
return 0;

}