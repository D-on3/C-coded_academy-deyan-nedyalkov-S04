#include <stdio.h>
/*
8. Напишете програма, която събира две числа, използвайки указатели.
*/

int main(){
    
    
    
    int iNum = 0;
    int iNum2 = 0;
    int iSum = 0;

    scanf("%d",&iNum);
    scanf("%d",&iNum2);
        int *pointerNum1=&iNum;
    int *pointerNum2=&iNum2;
    iSum = *pointerNum1 + *pointerNum2;
    printf("Sum =  %d \n",iSum);
    
    return 0 ;
    
    return 0 ;
}