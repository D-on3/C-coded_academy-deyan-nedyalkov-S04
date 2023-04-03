#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
 Задача 13.
 Ако имаме символен низ char str[] = “HELLO”, заменете
 всичките символи с главна буква със
 съответните символи с малка буква.
*/


int toUpperString(char str[],char str1[]){

    for(int i =0; i<strlen(str); i++){
        char temp = str1[i];
        printf("%c",toupper(temp));
    }
}


int main(){

    char str[]="Hello";
    char *str1=str;
    toUpperString(str,str1);
    printf("\n");
    return 0;
}