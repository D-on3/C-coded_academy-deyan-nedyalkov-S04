#include<stdio.h>
/*Задача 10. Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */


void my_swap(int* a,int* b);


int main(){
    int a = 15;
    int b =  7;
    int* p = &a;
    int* p2= &b;
    printf("Before the swap");
    swap(&a,&b);
    printf("%d ,%d",a,b);
    printf("After the swap");
    printf("%d ,%d",a,b);
}


void my_swap(int* a,int* b){
    *a = *a +*b;
    *b = *a -*b;
    *a = *a -*b;

}