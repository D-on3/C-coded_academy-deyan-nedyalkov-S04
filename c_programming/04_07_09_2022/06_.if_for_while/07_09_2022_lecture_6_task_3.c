/*
3. Напишете C програма за въвеждане на символ от потребителя и
проверете дали знакът е с главни или малки букви, като използвате if else.
Проверката за главни и малки букви ще стане като се използват кодовата
таблица за символите и факта, че кодовете на последователните символи
са последователни.
*/

#include<stdio.h>




int main(){

    char cSymbol=0;
    printf("Enter character \n");
    scanf("%c",&cSymbol);
    int iSymbol = (int)cSymbol;

    if(iSymbol >= 65 && iSymbol <= 90 ){
        printf("Its upper alpha\n");
    }
    else if(iSymbol >= 97 && iSymbol <= 122 ){
        printf("Its lower alpha\n");
    }
    else
        printf("Other\n");
    return 0;

}