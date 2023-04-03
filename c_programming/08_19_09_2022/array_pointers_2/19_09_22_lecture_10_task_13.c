#include<stdio.h>
    
/*1. Напишете програма, която принтира съдържанието на масив, като показва позицията в масива
на горния ред. Пример:
0 1 2 3 4 5 6 7 8 9
| 1| 8| 10| 7| 4| 112| 43| 144| 18| 11|*/


int main(){

int arr[5]={};

for(int i = 0;i<5;i++){
scanf("%d",&arr);
}
    int counter = 0;
    int* p = arr;
    printf("Positions : \n");
    for(int i = 0;i<10;i++){
        printf(" %d ", counter);
        counter++;
        
    }
    printf("\n");
    printf("Array :  \n");
    printf("|");
    for(int i = 0;i<10;i++){
        printf(" %d|", *p);
        p++;
    }