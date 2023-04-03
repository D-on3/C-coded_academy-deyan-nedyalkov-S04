#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int findingNumberLenght( int num){

    int lenghtOfNum = floor(log10(abs(num))) + 1;
    return lenghtOfNum;
}
int secondWayOfFindingNumberLenght(int num){
    int count=0;
    do {
        num /= 10 ;
        ++count;
    }while(num!= 0);
    return count;
}

int main(){

    int a=5;
    int iVar1=findingNumberLenght(a);
    int iVar2=secondWayOfFindingNumberLenght(a);
    return 0;
}