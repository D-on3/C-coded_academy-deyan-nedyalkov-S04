#include <stdio.h>
#include <stdlib.h>

/*Задача 1. Да се направи програма, която заделя динамичен масив с брой
елементи зададени от потребителя. За всеки елемент от масива се очаква
потребителят да въведе цяло и число и след това се изчислява сумата на
всички елементи от масива.*/

int main(){

    int block = 0;
    scanf("%d", &block);
    int *ptr = NULL;
    ptr  = (int*) calloc(block,sizeof(int));
    if(ptr == NULL){
        printf("Erorr");
    }
    int temp = 0;

    for(int i = 0 ;i<block;i++){
        scanf("%d",ptr);
        temp += *ptr ;
        ptr ++;
    }
    printf("Result of elements sum: %d",temp);

    free(ptr);

    return 0;




}
