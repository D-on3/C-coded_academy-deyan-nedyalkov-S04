/*
Задача 9*. Напишете функция int getline(char s[],int lim), която чете ред в s[] 
и връща дължината му
*/
#include <stdio.h>
#include <string.h>

int our_getline(char s[], int lim);

int main(){
    int lim = 0;
    char str[150];

    lim = our_getline(str, lim);
    printf("Lenght of string : %d", lim);
}

int our_getline(char s[], int lim){
    scanf("%[^\n]s", s);
    for(int i=0; s[i]!='\0'; i++){
        lim++;
    }
    return lim;
}

