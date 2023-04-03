/*Задача 1. Използвайте динамична реализация на стек за
въвеждане на поредица от цели положителни числа и нейното
извеждане върху екрана в обратен ред. За край на поредицата от
клавиатурата се въвежда 0.*/


#include<stdio.h>
#include<stdlib.h>


int *AllocateElement(int* ptr,int count){

return realloc(ptr,sizeof(int)*count);

}


void printStack(int* stack , int *counter){

stack += *counter;

for(int i = *counter;i>=0;i--,stack--){

    printf("\n%d ",*stack);

}
}



void push(int *ptr,int* stack,int el){
    int  temp = 0;
    stack = AllocateElement(stack,(*ptr+1));
    stack+=*ptr+1;
    *stack = el ;
    *ptr =1+*ptr;


}



int main(){
    
    int count  = 1;
    int* ptr_to_count = &count;
    int *stack =(int *) calloc(count,sizeof(int));
    *stack = 1;
    stack = stack +1;
    *stack =2;
    stack = stack-1;
 int usr_input = -1;


 
while(1){
        printf("\nEnter element\t\n");
       scanf("%d",&usr_input);
       if(usr_input == 0){break;}
        push(ptr_to_count,stack,usr_input);
        printStack(stack,ptr_to_count);

}


return 0 ;
}