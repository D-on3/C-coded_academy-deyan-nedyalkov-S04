/*Задача 1. Напишете програма, която чете стринг от стандартния вход и го
извежда на стандартния изход с функцията fgets();*/

#include<stdio.h>
#define FILENAME "1.txt"
#define size 100


int main(){
    FILE *file;
    char buffer[size];
    scanf("%s",buffer);
    file = fopen(FILENAME,"r+");
    
    
    if((fgets(buffer,size,file))!= NULL){
        puts(buffer);}
    
    fclose(file);
    return 0;
}