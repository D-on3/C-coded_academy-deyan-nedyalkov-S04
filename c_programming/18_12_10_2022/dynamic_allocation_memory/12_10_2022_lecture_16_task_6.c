#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
/*Задача 6. Напишете програма, която пита потребителя колко памет иска и заделя
съответният блок памет. След това попитайте потребителя за нов размер и
използвайте функция, която прави това.*/


int main(){

puts("Enter block size");
int block = 0;
scanf("%d",&block);
char* ptr=(char*) calloc(block,block * sizeof(char));
//printf("%u\n",malloc_size(ptr));

puts("Enter new mem block size: ");
scanf("%d",&block);

ptr =(char*) realloc(ptr,block*sizeof(char));
//printf("%u\n",malloc_size(ptr));




    return 0;
}