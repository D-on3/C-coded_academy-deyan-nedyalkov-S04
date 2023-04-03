#include <stdio.h>
#include <stdlib.h>
/*Задача 3 Напишете функции, с помощта на които 
да реализирате динамичен масив от елементи, чиято големина 
може да се променя по време на изпълнение на програмата.*/

int* Init(const unsigned blocks,const unsigned numOfBytes){
    return calloc(blocks,numOfBytes);
} 


int* ReInit(int* old,const unsigned numOfBytes){
    return realloc(old,numOfBytes); //realloc uses malloc so it doesnt null the pointer
}
int main(){

int block = 4;
int * ptr = Init(4,sizeof(int));
if (ptr == NULL){
    return -1;
}

long long count = 0;
while(1){
    printf("%d, ",ptr[count ++]);
    ptr++;
    if (count > block -1){
        ptr = ReInit(ptr,(count + block) * sizeof(int));
        block = count + block;
    }
}



    return 0;
}