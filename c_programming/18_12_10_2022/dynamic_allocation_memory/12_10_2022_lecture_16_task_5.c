#include <stdio.h>
#include <stdlib.h>

/*
Задача 5. Заделете динамична памет 
за масив от елементи, като извикате
функция, която нулира заделената памет.*/

int* NullElement(const int numberOfElements,const int sizeInBytes ){
    return calloc(numberOfElements,numberOfElements*sizeof(sizeInBytes));
}



int main(){


int *ptr = NullElement(4,4);
free(ptr);


    return 0;
}