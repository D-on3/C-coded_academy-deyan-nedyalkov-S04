#include"../include/main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



char *nameInit(int choice_name){
    
    char name[15];
    switch(choice_name){
        case 1:
            printf("Enter First Name:\t");
            break;
        case 2:
            printf("Enter Lastname:\t");
            break;
    }
    scanf("%s",name);
    printf("\n");
    char *allocated_name=(char*)calloc((strlen(name)+1),sizeof(char));
    for(int i =0;i<strlen(name)+1;i++){
            *allocated_name += name[i];
             allocated_name++;
    }
    allocated_name -= strlen(name)+1;
    return allocated_name;
}


void copyNameToStruct(record* students){
    char new_name[12]={};
    printf("Enter new first name: \t");
    scanf("%s",new_name);
    strncpy(students->firstName,new_name,sizeof(new_name));
    char new_name2[12]={};
    printf("Enter new last name: \t");
    scanf("%s",new_name2);
    strncpy(students->lastName,new_name2,sizeof(new_name2));
}                
     



void printStruct(record *str){
    int counter =0;
    for(int i  = 0;i<(lineCount());i++){
        printf("%d %s %s %d \n",str->id,str->firstName,str->lastName,str->treat);
        str ++;
        counter++;}
        str -=counter;

}
