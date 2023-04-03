#include <stdio.h>
#include <stdlib.h>

/*Задача 2. Разширяване на заделена памет с realloc.*/

int main(){


    int block = 0;
    scanf("%d", &block);
    int *ptr = NULL;
    ptr  = (int*) malloc(block*sizeof(int));
    if(ptr == NULL){
        printf("Erorr");
    }

    int size_of_new= 0;
    scanf("%d",&size_of_new);

    ptr = (int*) realloc(ptr ,(block + size_of_new)*sizeof(int));

    free(ptr);

    return 0;




}


