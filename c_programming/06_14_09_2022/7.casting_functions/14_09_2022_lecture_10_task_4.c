#include <stdio.h>
/*Много по-добре би било, ако имаме една функция, която извършва
събирането на две числа и една, която инкрементира числото с единица:*/

int add(int a, int b){
return a + b;
}
int incr(int c){
return ++c;
}
int main(void){
int a = 1, b = 2, res = 0;
res = add(a, b);
a = incr(a);
return 0;
}