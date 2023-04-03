#include<stdio.h>
#include<stdlib.h>
#include"../include/write_to_file.h"


void initFile(){
    FILE* file;
    if((file = fopen(FILENAME,"r")) != NULL){
        
        file = fopen(FILENAME,"w+");
        fclose(file); 
        file = fopen(FILENAME,"a+");
        fclose(file); 
    }
    else {
        file = fopen(FILENAME,"w+");
        fclose(file);
    }
  
}


void writeMovesToFileKnight(char cmd[4]){
    FILE *file;
    static int a = 0;
    if(a==0){
    initFile();}
    
    file = fopen(FILENAME,"a+");
    fprintf(file,"%s ",cmd);
    a++;
    fclose(file);
}

void writeFinalMoves(int moves){

    FILE *file;
    static int a = 0;
    if(a==0){
    initFile();
    }
    a++;
    

    file = fopen(FILENAME,"a+");
    fprintf(file,"%d \n",moves);
    fclose(file);

}

void writeMovesQueenRook(char cmd[4],int moves){

    FILE *file;
    
    static int a = 0;
    if(a==0){
    initFile();}
    
    a++;

    file = fopen(FILENAME,"a+");
    fprintf(file,"%s %d ",cmd,moves);
    fclose(file);
    
}




void read_file_to_one_string(){
    FILE *file;
    
    file = fopen(FILENAME,"r+");

    if(file == NULL) {return;}

    fseek(file,0,SEEK_END);
    int lenght= ftell(file);
    fseek(file,0,SEEK_SET);
    
    char *whole_file=(char *) calloc((lenght+1),sizeof(char));//+ len for null char

    char c ;
    int i = 0 ;//counter and idx for line 

    while((c=fgetc(file)) != EOF){
        whole_file[i]=c;
        printf("%c",whole_file[i]);
        i++;
    }
    char temp = '\0'; 
    whole_file[i]=temp;
    fclose(file);



}

