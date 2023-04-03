/*
Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.
*/
#include <stdio.h>

typedef int t_array[10];

int main(){
    t_array array;

    for (int i=0; i<10; i++){
        array[i] = i+1;
    }

    for (int i=0; i<10; i++){
        printf("%d ", array[i]);
    }
}