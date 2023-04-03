#include <stdio.h>
/*Напишете програма, която въвежда и принтира елементитe на масив, използвайки указател.
*/


int main(){

    int arr[5]={};
    int* p = arr;
    int* pLast= p +5;
    for(* p = 0; p < pLast;){
        scanf("%ls",&p);
        printf("Element = %ls \n",p);
        p++;
    }



    return 0;
}


