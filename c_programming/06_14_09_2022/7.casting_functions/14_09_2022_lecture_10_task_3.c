#include <stdio.h>

/*Функциите разделят големи изчислителни задачи на по-малки. Може и
всичко да напишем в main(). Но тогава нашият код ще бъде трудно да се
преизползва: Представете си, че искаме да съберем две числа:*/

int main(void){
int a = 2;
int b = 2;
int rez;
rez = a + b;
printf("%d", rez);
a += 1;
b += 1;
rez = a + b;
printf("%d", rez);
return 0;
}