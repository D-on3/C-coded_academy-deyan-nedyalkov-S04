/*Задача.3. Направете масив от указатели към функции по следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}

void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от горните функции
иска да използва – събиране, изваждане, умножение и деление. След това
попитайте за числата, които да участват в тази операция, и извикайте
функцията, която да извърши желаната операция.*/
#include <stdio.h>
#include <stdlib.h>

typedef int(*pointCalc)(int,int);

int add(int a ,int b){return(a+b);}

int subs(int a ,int b){return(a+b);}

int devide(int a ,int b){return(a+b);}

int multiplicate(int a ,int b){return(a+b);}




int  (*func_ptr[4])(int, int) = {add,subs,devide,multiplicate};


int main(int argc,char* argv[]){
    pointCalc p = NULL;
    int choice;
    int nA;
    int nB;

    printf("Enter the first number\n");
    scanf("%d",&nA);
    printf("\nEnter the second number\n");
    scanf("%d",&nB);

    printf("\nChoose one\nAdd = [1]\nSubstract = [2]\nDevide = [3] \nMultiply [4]\n");
    scanf("%d",&choice);
    printf("\n");
    switch(choice){
        case 1:p = func_ptr[0];break;
        case 2:p = func_ptr[1];break;
        case 3:p = func_ptr[2];break;
        case 4:p = func_ptr[3];break;
        default:
        break;
}


    printf("%d\n",p(nA,nB));
    return 0;

}