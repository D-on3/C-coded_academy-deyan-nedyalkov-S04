#include <stdio.h>
/*
За преобразуване на един тип в друг се използва операторът за
кастване (). В долния пример, ако имаме деление на цели числа дори и
резултатът да се присвоява на променлива с плаваща запетая, дробната
част при делението няма да я има. Затова трябва да кастнем поне едната
променлива към тип (double)x; Пробвайте сами: */

int main(void){
int x = 10, y = 3;
double r;
r = x/y;//Отговор - 3.000000
printf("%lf\n", r);
r = (double)x/y;//Отговор - 3.333333
printf("%lf\n", r);
return 0;
}