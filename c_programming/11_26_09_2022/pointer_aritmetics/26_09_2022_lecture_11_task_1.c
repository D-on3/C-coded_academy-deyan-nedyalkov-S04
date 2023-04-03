/* Задача 1. Напишете програма, която сумира всички елементи на масив намиращи се на нечетна позиция. 
Масива да бъде въведен от потребителя. Разпечатайте в конзолата масива и сумата.*/
#include <stdio.h>


printArray(int arr[],int size);
int main(){
    int arr[4]={};



}




printArray(int arr[],int size){
    for(int i = 0;i<size;){
        printf("%d ",arr[i]);
    }
}

initArray(int arr[],int size){
    for(int i  = 0;i < size; i++){
        scanf("%d ",arr[i]);
        *arr = &arr;
    }

}