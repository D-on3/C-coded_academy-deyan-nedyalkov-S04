#include<stdio.h>
#include"../include/main.h"
#include<string.h>


int iSitOver(field *str,int size){
    int counter =0;
    int pawns =  0 ;

    for(int i  =0;i<size*size;i++){

          if(strcmp(str->value,"p") == 0 ){
            pawns ++;}
        counter++;
        str++;
        }

if(pawns<=0){
    return 0;
    }

str -= counter;
return  1;

}

