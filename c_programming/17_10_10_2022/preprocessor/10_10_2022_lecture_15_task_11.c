/*Задача 11. Напишете функциите като макроси:
1. Функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. Функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/
#include<stdio.h>

#define AVG(x,y) double c = ((double)x+(double)y) / 2; \
printf("\n%.2lf",c); \
return  c;
#define sqrt(x,y) x =x*x;\
 y=y*y;


#define TOUPPER(c) printf("%s",c - 47); 
//#define DISP(f,y) printf(“sqrt %d ”,sqrt, y));
 




int  main(){

int  x = 5;
int y = 2;
char *temp = "a";
sqrt(x,y);
printf("Number a:%d Number b:%d",x,y);
AVG(5,2);
TOUPPER(temp);
//DISP(sqrt,y);


}