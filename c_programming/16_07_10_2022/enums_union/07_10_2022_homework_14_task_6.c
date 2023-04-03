/*Задача 6. Използвайки предната задача, напишете програма, която да чете
от стандартния вход CSV формат на описаната структура и да попълва
масив от 20 структури. Пример: a.exe < structs20.csv*/

//on most terminals you can redirect the streams to and from files like so:
// myprog.exe < file_to_read.txt 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define size 4
#define sizeStruct 20

typedef enum enm {one ,two,ELSE,zero }enm;

typedef struct {

int ni;
char ch[10];
double nd;
enm e ;
} someStruct;

typedef someStruct Soms;

void  PrintEnum(Soms *dstruct ){

     switch(dstruct->e){
        case one:printf("one\n");break;
        case two:printf("two\n");break;
        case ELSE:printf("Else\n");break;
        case zero:printf("z3r0\n");break;
        default:
            printf("? \n");
     }
 }


void printStruct(Soms *var){
    static int counter = 1;

    printf("Struct number[%d]  \n",counter);
    printf("Struct member 1: %d \n",var->ni);
    printf("Struct member 2: %s \n",var->ch);
    printf("Struct member 3: %.3lf \n",var->nd);
    printf("Struct member 4: ");
    PrintEnum(var);
    
    counter++;
}




int main(int argc, char *argv[]){

    char str[2000] ="4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,2,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1,4,HASDHJDS,3.23,1";

    Soms a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20 ={};
    Soms arr[20]={a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20};
    //printf("This is printing [1]%s,[2]%s",argv[0],argv[]);

    char *token = strtok(argv[1], ","); // separating the string to little pieces deviding it by ","
    int counter = 0;

for(int k=0;k<sizeStruct;k++){

    
    for(int i = 0;counter<size; i++){


        

//
        
        if(counter == 0){
      
            arr[k].ni = atoi(token) ;
  
        }

        if(counter == 1){
            
            strcpy(arr[k].ch,token);// copy the token value to the struct members value 
        }

        else if(counter == 2 ){
            
            arr[k].nd = atof(token);


        }
        else if(counter==3){
            arr[k].e = (unsigned int)(atoi(token)); // unsigned int to be used in the other step
            
        }
        counter ++;

        token = strtok(NULL, ","); 
        






    }
    counter = 0;
    // if(token != NULL){
    //     break;
    //    }

}

int lenghtArr = sizeof(arr)/ sizeof(Soms); // size of the array 

for(int i = 0;i <20;i++){

printStruct(&arr[i]);


}

    return 0;
}