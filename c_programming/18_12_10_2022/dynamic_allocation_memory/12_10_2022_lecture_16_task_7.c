#include <stdio.h>
#include <stdlib.h>
/*Задача 7. Реализирайте масив с променлива размерност. Началният размер на
масива да бъде въведен от потребителя. Запълнете масива с избрани от вас цели
числа. Изведете масива на екрана. Запитайте потребителя за нов размер на
масива и повторете предните операции - запълнете масива с избрани от вас 
числа и го изведете на екрана.*/



void printResult(const int limit,int *arr){

    for(int i =0 ;i<limit;i++){

        printf("%d ",*arr);
        arr++;
        }
    }
void initArr(const int limit ,int* arr)
{   
    for(int i = 0;i<limit;i++){
        scanf("%d",arr);
        arr++;
    }

}
int main(){
    int block=0;
    printf("Enter how much elements do you want in the array: ");
    scanf("%d",&block);
    int new_block_size=0;
    int *ptr =(int*) malloc(block*sizeof(int));
    for(int i =0;;i++){
        scanf("%d",ptr);
        ptr++;
        if(i==block-1){
            ptr -= block;
            printResult(block,ptr);
            printf("Enter with how much elements will you input   ");
            scanf("%d",&new_block_size);
            ptr= (int *)realloc(ptr,new_block_size*sizeof(int));
            break;

    }
    }
    initArr(new_block_size,ptr);
    printf("The new array");
    printResult(new_block_size,ptr);


    return 0;
}