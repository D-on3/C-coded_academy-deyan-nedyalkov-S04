/*Задача 4. Напишете функцията за сумиране елементите на масив, използвайки адресна аритметика вместо инкрементиращa променливa.
*/
#include <stdio.h>


int sumElements(int size ,int arr[size] );

int main(){
int arr[6] ={};


}


int sumElements(int size ,int arr[size] ){

int iSum=0;
int *p = &arr;
for(p; p<size; p++){
    iSum += *p;
    printf("%d" ,*p);
}


}
