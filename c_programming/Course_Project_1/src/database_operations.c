#include "../include/main.h"
#include"../include/data_serialization.h"
#include"../include/dynnamic_allocation_names.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void setAllToZero(){
    FILE *file;
    file = fopen(FILENAME,"r+");
    char *str=read_file_to_one_string();
    int  number_of_students = lineCount();
    record *students = use_data(str);

    int counter = 0;

    for(counter;counter<number_of_students;){
        students->treat -= 100;
        if(students->treat){
            students->treat =0;
        }
        students++;
        counter++;
    }
    students -= counter;
    updateFile(students);
    fclose(file);
    free(students);
    }

void listAll(){

    char *str=read_file_to_one_string();
    int  number_of_students = lineCount();
    record *students = use_data(str);

    int counter = 0;
    printf("|==================List-of-Students=================================|\n");
    for(int i = 0;i<number_of_students;i++){
        printf("|ID: %d FirstName:%s  Lastname: %s Treats 0Wn3d: %d \n",students->id,students->firstName,students->lastName,students->treat);
        printf("|===================================================================|\n");
    students ++;
    counter++;
    }
    printf("|===================================================================|\n");
    students -= counter;
    free(students);
}


void addToAll(){
    listAll();
    printf("\n");
    char *str=read_file_to_one_string();
    int  number_of_students = lineCount();
    record *students = (record*) calloc((number_of_students+1),(sizeof(record)));
    students = use_data(str);

    int i = 0;

    for(i;i<number_of_students;i++){
        students->treat +=1;
        students ++;}
    students-=i;
    updateFile(students);
    free(students);
    free(str);
}


void addTreats(){
    listAll();
    printf("\n");
    char *str=read_file_to_one_string();
    int  number_of_students = lineCount();
    record *students = use_data(str);

    char *allocated_firsName=nameInit(1);
    char *allocated_LastName =nameInit(2);

    int counter = 0 ;
    int other_counter =0;

    for(int i= 0;i<number_of_students;i++){
        if(strcmp(students->firstName,allocated_firsName) == 0 ){
            if(strcmp(students->lastName, allocated_LastName)== 0 ){
                students->treat += 1;
                printf("Update Successfull!\n");
                break;} 
        }
        else{
            other_counter +=1;
        }
        students ++;
        counter ++;  
    }
    if(other_counter>=lineCount()){
        printf("|User not in database!\n");

    }
    students -= counter;
    free(allocated_firsName);
    free(allocated_LastName);
 
    free(str);
    updateFile(students);
   free(students);
}

           

void editName(){
    listAll();
    printf("\n");

    char *str=read_file_to_one_string();
    int  number_of_students = lineCount();
    record* students = use_data(str);


    char *allocated_firsName=nameInit(1);
    char *allocated_LastName =nameInit(2);

    int is_it_in = 0;
    int counter = 0 ;

    for(int i= 0;i<number_of_students;i++){    
        if( strcmp(students->firstName,allocated_firsName)== 0 ){
            if( strcmp(students->lastName,allocated_LastName)== 0 ){
                copyNameToStruct(students);
                printf("Update Succesfull\n");
                is_it_in +=1;
                break;
            }
        }
        students ++;
        counter ++;  
    }

    if(!is_it_in){
            printf("\n|Stundent  \t\t%s %s\t\t not in the database!\n",allocated_firsName,allocated_LastName);
        }
    free(allocated_firsName);
    free(allocated_LastName);

    students -= counter;
    updateFile(students);
    free(students);
    free(str);
}
void editTreats(){
    listAll();
    printf("\n");
    char *str=read_file_to_one_string();
    int  number_of_students = lineCount();
    record *students = use_data(str);

    
    int treats=0;
    char *allocated_firsName=nameInit(1);
    char *allocated_LastName =nameInit(2);

    printf("Enter new value for treats\t");
    scanf("%d",&treats);
    printf("\n");


    int counter = 0 ;
    int is_it_in =  0;
    for(int i= 0;i<number_of_students;i++){
        if((strcmp(students->firstName,allocated_firsName)) == 0 ){
            if(strcmp(students->lastName,allocated_LastName)== 0 ){
                    students->treat = treats;
                    printf("Update Succesfull!\n");
                    break;
            }
        }
        students ++;
        counter ++;
    }
    if(!is_it_in){
            printf("\n|Stundent  \t\t%s %s\t\t not in the database!\n",allocated_firsName,allocated_LastName);
        }
    
    
    free(allocated_firsName);
    free(allocated_LastName);
    
    students -= counter;
    
    updateFile(students);
    free(students);
    free(str);
}

void substractTreats(){
    listAll();
    printf("\n");
    char *str=read_file_to_one_string();
    int  number_of_students = lineCount();
    record *students = use_data(str);

    char *allocated_firstName=nameInit(1);
    char *allocated_LastName =nameInit(2);
    
    int counter = 0 ;
    int is_it_in = 0;

    for(int i= 0;i<number_of_students;i++){
        if(strcmp(students->firstName,allocated_firstName) == 0 ){
            if(strcmp(students->lastName,allocated_LastName)== 0 ){
                is_it_in +=1;
                if(students->treat > 0){
                students->treat -= 1;
                printf("Update Succesfull!\n");
                break;
                }
            } 
        }
        students ++;
        counter ++;
        }

    if(!is_it_in){
            printf("\n|Stundent  \t\t%s %s\t\t not in the database!\n",allocated_firstName,allocated_LastName);
        }

    students -= counter;


    free(allocated_firstName);
    free(allocated_LastName);
    updateFile(students);
    free(str);  
    free(students);
}

void addRecord(){
    FILE* file;
    file =fopen(FILENAME,"a+");
    short int idx_number_of_students  = lineCount(FILENAME);
    char *str=read_file_to_one_string();
    record *students = use_data(str);



    char *allocated_firstName=nameInit(1);
    char *allocated_LastName =nameInit(2);

    int counter = 0 ;

    for(int i= 0;i<idx_number_of_students;i++){
        if(strcmp(students->firstName,allocated_firstName) == 0 ){
            if(strcmp(students->lastName,allocated_LastName)== 0 ){
                    printf("User allready exists! %s %s \n",allocated_firstName,allocated_LastName);
                    break;
            }
        }
            else{
                fprintf(file,RECORD_FORMAT_OUT,idx_number_of_students+1,allocated_firstName,allocated_LastName,0);
                printf("Update Succesfull\n");
                break;
        }
        students ++;
        counter ++;} 
    
    free(allocated_firstName);
    free(allocated_LastName);
    free(students);
    free(str);
    students -= counter;
    fclose(file);
}




void menu(){
    short int ch = 999;
    do{     printf("\n|====================================|");
            printf("\n|===============STUDENT==============|");
            printf("\n|=================DB=================|");
            printf("\n|====================================|");
            printf("\n|1.GIVE A TREAT                      |");
            printf("\n|2.ADD A TREAT                       |");
            printf("\n|3.EDIT NAME                         |");
            printf("\n|4.EDIT TREATS                       |");
            printf("\n|5.ADD STUDENT                       |");
            printf("\n|6.ADD TREATS T0 ALL                 |");
            printf("\n|7.LIST ALL                          |");
            printf("\n|8.GIVE ALL TREATS AT ONCE           |");
            printf("\n|0.EXIT                              |");
            printf("\n|====================================|\n");
            scanf("%hd",&ch);
        switch(ch){
       
            case 1: system("clear");substractTreats();break;
            case 2: system("clear");addTreats();break;
            case 3: system("clear");editName();break;
            case 4: system("clear");editTreats();break;
            case 5: system("clear");addRecord();break;
            case 6: system("clear");addToAll(); break;
            case 7: system("clear");listAll();break;
            case 8: system("clear");setAllToZero();break;
            case 0: system("clear");break;
            default:
                ch = 999;
            break; 
        }
    }while(ch != 0);

}