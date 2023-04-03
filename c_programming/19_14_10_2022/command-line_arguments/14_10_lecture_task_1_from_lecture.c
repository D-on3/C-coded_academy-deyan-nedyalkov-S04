#include<stdio.h>
#include<stdlib.h>
/*Задача 1. Да напишем функция char *month_name(int n), която връща указател към
символен низ, съдържащ името на n-тия месец. Да декларираме вътрешен static масив
от указатели, сочещ към стрингове съдържащи имената на месеците
static char *name[] = {
"Illegal month",
"January", "February", "March",
"April", "May", "June",
"July", "August", "September",
"October", "November", "December"};
Функцията връща указател към съответния месец, отговарящ на параметъра n.*/
char *month_name(int n);

int main(){


printf("%s",*month_name(4));



    return 0;
}



char *month_name(int n){

static char *name[]={
    "Illegal month",
"January", "February", "March",
"April", "May", "June",
"July", "August", "September",
"October", "November", "December"
};
//check 
return (n<1||n>12)?name[n]:name[n];


}