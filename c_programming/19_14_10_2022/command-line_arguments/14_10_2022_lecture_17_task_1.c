#include<stdio.h>
#include<stdlib.h>




/*Задача 1.  Напишете програма, която чете 
съобщение от няколко 
думи и го принтира в обратен ред. */

int main(int argc, char *argv[]){


    for(int i = argc-1 ;i>0;i--)
    {
        printf("%s ",argv[i]);
    }
    printf("\n");


    return 0;
}