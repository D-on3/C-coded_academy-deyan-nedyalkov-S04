/*Задача 5. Дефинирайте структура с 4 полета 
(int. char[10], double, enum), направете масив от 
20 структури и ги попълнете. Изведете масива 
от структури на стандартния изход в CSV формат.*/
#include <stdio.h>
typedef enum enm {one ,two,elser}enm;


typedef struct {

int ni;
char ch[10];
double nd;
enm e ;
} someStruct;

typedef someStruct Soms;

Soms init_struct(void){
    Soms a={};
    printf("Enter number: \n");
    scanf("%d",&a.ni);
    printf("Enter string: \n");
    scanf("%s",a.ch);
    printf("Enter number with floating point: \n");
    scanf("%lf",&a.nd);
    printf("Enter number of element: \n");
    switch(a.e){
         case one : break;
        case two : break;
        default:
         a.e = elser;
     }


    return a;
}

void representSingleStruct(Soms *a){
printf("%d,%s,%lf,%u",a->ni,a->ch,a->nd,a->e);
}

void PrintEnum(Soms *dstruct ){

    switch(dstruct->e){
        case one: puts(",True,");break;
        case two: puts (",False,");break;
        case elser: puts(",Some went backwards,");break;
        default:
        puts(",");
    }
}


int main(){
Soms a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20 ={};
Soms arr[20]={a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20};


Soms test = init_struct();
representSingleStruct(&test);

for(int i = 0;i<20;i++){
arr[i] = init_struct();
representSingleStruct(&arr[i]);
PrintEnum(&arr[i]);
}

return 0;
}
