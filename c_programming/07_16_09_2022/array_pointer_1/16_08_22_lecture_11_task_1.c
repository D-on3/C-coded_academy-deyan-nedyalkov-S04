#include <stdio.h>

/*1.Прочетете масив от цели числа от клавиатурата. Копирайте
въведения масив във втори масив, като умножите стойността
на всеки елемент по 2. Принтирайте двата масива.*/

int main(){


    int arr[4]= {};
    int arr2[4] ={};
    for(int i = 0;i< 5 ; i++)
    {
        scanf("%d ",&arr[i]);

    }
    printf("Original array: \n");
    for(int k=0 ; k<5; k++){
        printf("%d  ",arr[k]);
        }
    printf("\n Array multiplied by two: \n");

    for(int j=0 ; j<5 ; j++){
        arr2[j] = arr[j] * 2 ;
        printf("%d  ",arr2[j]);
    }
    printf("\n ");

    return 0;
}