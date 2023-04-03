/*Задача 11 Напишете програма на C за отпечатване на азбуката от a до z с помощта на цикъл while.*/
#include <stdio.h>

int main(){

    char cChar=97;
    int iChar= (int)cChar;

    while(iChar <= 122 ){
        printf("%c\n",iChar);
        iChar ++;


    }

    return 0;


}