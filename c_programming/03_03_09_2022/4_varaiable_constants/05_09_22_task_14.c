#include <stdio.h>

/*Зада 14. Напишете глобална променлива, която увеличаваме с 1 във функция void test().
Извикайте функцията три пъти test() от main() принтирайте стойността на глобалната променлива.*/

extern int i;
int i = 1;

void test(int var);

int main(){


    test(i);
    printf("%d\n",i);
    test(i);
    printf("%d\n",i);
    test(i);
    printf("%d\n",i);
    return 0;
}

void test(int var){
    i++;
}