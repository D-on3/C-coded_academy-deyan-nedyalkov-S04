#include <stdio.h>
#include <string.h>

/*

Задача 11. Ако имаме символен низ от  символа char str[] = “Hello”;
 копирайте всеки един от неговите символи в низ, който да изглежда огледален на него.
 Ето така char rts[] = “ollеH”; и принтирайте резултата.


 * */

int reverseString(char *string){
    int lenght = strlen(string);
    int middle = lenght /2;
    char temp;
    for(int i=0; i<middle;i++){
        temp =  string[i];
        string[i]= string[lenght - i-1];
        string[lenght -i -1 ]= temp;
    }
    printf("%s\n",string);
}




int main(){

    char str[]="Hello";
    reverseString(str);
    return 0;
}