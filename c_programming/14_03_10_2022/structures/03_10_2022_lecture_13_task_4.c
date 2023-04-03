/*Задача 4. Напишете произволна програма, 
която да демонстрира уменията ви да боравите с nested structure.*/
#include<stdio.h>
typedef struct Parrent{
    char eyes[8];
    char lastname[15];
    char hairColour[8];
    int numberOfIssues;
}Parrent;


typedef struct Child{

    char name[10];
    Parrent callItCoincidence;

}Child;



Child init_child_name(void){
    Child NewChild={};
    
    printf("Enter name for the child: \n");
    scanf("%s",NewChild.name);
    printf("Enter last name : \n");
    scanf("%s",NewChild.callItCoincidence.lastname);
    return NewChild;

}


int main(){

    Child littleGuy;
    littleGuy= init_child_name();
    printf("Firname : %s , Lastname: %s \n",littleGuy.name,littleGuy.callItCoincidence.lastname);




}