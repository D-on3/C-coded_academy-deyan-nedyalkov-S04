#include "../include/main.h"
#include"../include/validations_checks.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>




void updateFile(record* students){
    FILE *file;
    file = fopen(FILENAME,"r+");
    int number_of_elements = lineCount();
    int counter = 0;

    for(counter;counter<number_of_elements;){
        fprintf(file,RECORD_FORMAT_OUT,students->id,students->firstName,students->lastName,students->treat);
        students++;
        counter++;
    }
    students -= counter;
    fclose(file);
    }



record *use_data(char *wholefile){
    int number_of_elements=lineCount();

    record *students=(record*) calloc((number_of_elements+2),(sizeof(record)));

    char* token = strtok(wholefile,", \n");


    int counter = 0;
    int another_counter =0;

    for(int i = 0;i<number_of_elements;i++){

        for(int member=0;member<4;member++){
               // printf("%s\n",token);
            if(counter == 0){  
                students->id =0;
                students->id = atoi(token) ;
            }
            if (counter == 1){
                strcpy(students->firstName,token);
            }
            else if(counter == 2 ){
                strcpy(students->lastName,token);
            }
            else if(counter==3){
                //printf("treats: %s\n",token) ;   
                students->treat =atoi(token); 
            }
            counter ++;
            token = strtok(NULL, ",\n");
        }
        counter = 0;
        another_counter ++;
        students++;
    }

    students -= another_counter;

    return students;
    }



char *read_file_to_one_string(){
    FILE *file;
    
    file = fopen(FILENAME,"r+");

    if(file == NULL) {return NULL;}

    fseek(file,0,SEEK_END);
    int lenght= ftell(file);
    fseek(file,0,SEEK_SET);
    
    char *whole_file=(char *) calloc((lenght+1),sizeof(char));//+ len for null char

    char c ;
    int i = 0 ;//counter and idx for line 

    while((c=fgetc(file)) != EOF){
        whole_file[i]=c;
        i++;
    }
    char temp = '\0'; 
    whole_file[i]=temp;
    fclose(file);


    return whole_file;
}
