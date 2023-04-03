#include <stdio.h>
#include <ctype.h>
#include <string.h>

/*
 Задача 13.
 Ако имаме символен низ char str[] = “HELLO”, заменете
 всичките символи с главна буква със
 съответните символи с малка буква.
*/

int main(){


    char str[]="Hello";
    for(int i ; i<strlen(str); i++){
        printf("%s",str[i]);
    }


    printf("\n");
    return 0;
}