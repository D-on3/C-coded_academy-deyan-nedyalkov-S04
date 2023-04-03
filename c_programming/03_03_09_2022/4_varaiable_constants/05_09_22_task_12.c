#include <stdio.h>


/*
Задача 12. Ако имаме символен низ char str[] = “Hеllo”,
заменете буквите l с х на същия символен низ и отпечатайте резултата на конзолата.

 * */



int main(){

    char str[]= "Hello";
    str[2] = 'c';
    str[3] = 'c';
    printf("%s\n",str);


return 0;

}