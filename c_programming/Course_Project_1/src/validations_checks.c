#include"../include/main.h"
#include<stdio.h>
#include<stdlib.h>



int lineCount(){

        FILE *file = fopen(FILENAME,"r");
        
        char c;
        int count = 0;
        char temp;
        for (c = getc(file); c != EOF; c = getc(file)){
            if (c == '\n') {// Increment count if this character is newline
            count = count + 1;}}

        return count;
}


void initFile(){
    FILE* file;
    if((file = fopen(FILENAME,"r")) != NULL){
        file = fopen(FILENAME,"a");
        fclose(file); 
    }
    else {
        file = fopen(FILENAME,"w+");
        fclose(file);
    }
  
}
