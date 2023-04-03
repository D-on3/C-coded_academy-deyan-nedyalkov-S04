#include<stdio.h>
#include<math.h>
/*15.Да се напише програма, която намира сумата на всички числа между 100 и 200, 
които се делят на 9.*/



int main(){

int a=100,b=200;
int iSum=0;
int forcheck = 0;
for(a;a<=b;a++){
    int forchek= a % 9;
    if(a % 9 == 0){
        iSum += a;
    }
}
printf("%d\n",iSum);

}