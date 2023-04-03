#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define numberOfRuners 3
/*Задача 8. Напишете програма, в която се въвеждат пореден номер, име,
фамилия, възраст на участници в маратон. Изискването е за името и
фамилията да не се използват масиви с фиксирана дължина. След като
въвеждането завърши, изведете списък с участниците. */
/*https://stackoverflow.com/questions/30409069/how-to-allocate-memory-to-a-char-pointer-in-a-struct-in-c*/


typedef struct person_names{
    char *first_name;
    char *last_name;
}person_names;

typedef struct person_num{

    int current_number;
    int age;
}person_num;

typedef union whole_person{
    person_names names;
    person_num numbers;
}person;



void printRunner(person *current){
    printf("ID: %d ", current->numbers.current_number);
    //printf("NAME: %s ",current->names.first_name);
    //printf("Lastname %s",current->names.last_name);
    printf("Age: %d ",current->numbers.current_number);
}


char* ReInit(int numLenght){
    return malloc(numLenght *sizeof(char)); //realloc uses malloc so it doesnt null the pointer
}


int main(){
    person a,b,c;
    person arr[numberOfRuners]={a,b,c};
    person *ptr = arr;
    for(int i = 0;i<numberOfRuners;i++){
        char str_first_temp[15];
        char str_last_temp[15];
        printf("Enter first name: \n");
        scanf("%s",str_first_temp);
        printf("Enter last name: \n");
        scanf("%s",str_last_temp);
        int lenFirstname =strlen(str_first_temp);
        int lenLastname = strlen(str_last_temp);

        ptr->names.first_name= ReInit(lenFirstname);
        ptr->names.last_name=  ReInit(lenLastname);
        ptr ++;
}


for(int i = 0 ;i<numberOfRuners;i++){
    printRunner(ptr);
    ptr++;

}

    return 0;
}