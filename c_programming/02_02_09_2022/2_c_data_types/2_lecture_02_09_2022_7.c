#include<stdio.h>

/*7. Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357
674 000, 3 657 895 000.
Изведете всяка променлива на екрана със printf()*/

int main(){
 
int signed iA = 24212;
signed long int  iB = -1357674;
signed long int iC = 1357674;
int signed  iD = -1357;
long long int iE = 674000;
unsigned long int iF = 3657895000;





printf("%hi\n", iA);
printf("%li\n", iB);
printf("%li\n", iC);
printf("%hi\n", iD);
printf("%lli\n", iE);
printf("%lu\n", iF);



return 0;

}
