#include <stdio.h>

/*10. Напишете програма, която обръща стринг, въведен от клавиатурата, 
използвайки указатели.*/



 void swap(int* num1 ,int* num2){

     int temp = * num1;
     *num1 = * num2; 
     *num2 = temp;
     printf("Number after the swap %d %d",*num1,*num2);

 }

int main(){

int iNum1,iNum2;
int *iPointer = &iNum1;
int * iPointer2 = &iNum2;
scanf("%d",&iNum1);
scanf("%d",&iNum2);
printf("Numbers Before Swap: %d  %d \n",iNum1,iNum2);

swap(iPointer,iPointer2);



    return 0 ;
}