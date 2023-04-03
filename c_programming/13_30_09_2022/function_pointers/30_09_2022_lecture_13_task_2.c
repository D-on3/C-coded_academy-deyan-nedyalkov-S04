/*

#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB) { return(nA + nB); }
int fnMinus(int nA, int nB) { return(nA - nB); }
int ( * pfCalc ) ( int, int ) = NULL;
Задача 2. Добавете към горния код функции за умножение и деление.
*/

#include <stdio.h>
#include <stdlib.h>
typedef int (*Fptr) (int,int);

int fnPlus(int nA , int nB){return(nA + nB);}
int fnMinus(int nA , int nB){return(nA + nB);}
int fnDevide(int nA , int nB){return(nA + nB);}
int fnMultiply(int nA , int nB){return(nA + nB);}

int main(int argc,char* argv[]){

//aways null the ponters
    Fptr p = NULL;
    switch (*argv[2])
    {
        case '+':p =fnPlus;break;
        case '-':p =fnMinus;break;
        case '*':p =fnMinus;break;
        case '\\':p =fnMinus;break;
        default:
        p  = NULL;
    }


    printf("%d\n",p(atoi(argv[1]),atoi(argv[3])));


}


