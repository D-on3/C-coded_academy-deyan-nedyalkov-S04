#include<stdio.h>


int addDigit(int a, int b){
int iSum = a+b;
return iSum;
}



int main(){

int a = 1, b= 4 ;

int iResultToBePrinted = 0;
iResultToBePrinted = addDigit(a,b);

printf("%d\n",iResultToBePrinted);

return 0;

}
