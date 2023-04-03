/*
Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.
*/
#include <stdio.h>

typedef int array[10];

int main(){
    array d_array;

    for (int i=0; i<10; i++){
        d_array[i] = i+1;
    }

    for (int i=0; i<10; i++){
        printf("%d ", d_array[i]);
    }
}