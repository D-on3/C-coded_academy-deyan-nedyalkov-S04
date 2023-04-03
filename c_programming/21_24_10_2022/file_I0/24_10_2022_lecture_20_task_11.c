/*

Задача 11. Напишете програма, която да намери общия брой на
редовете в текстови файл. Създайте файл, който съдържа няколко
реда текст. Внимавайте къде се позиционирате файла. Отворете
файла. Използвайте променлива, която да брои броя на редовете.

*/

#include<stdio.h>
#include<stdlib.h>
#define FILENAME "11.txt"



int lineCount(){

        FILE *file ;
        file =fopen(FILENAME,"r");
        
        char c;
        int count = 0;
        char temp;
        for (c = getc(file); c != EOF; c = getc(file)){
            if (c == '\n') {// Increment count if this character is newline
            count = count + 1;}}
        fclose(file);
        return count;
}


void initFile(){
    FILE * file;
    if((file = fopen(FILENAME,"r")) != NULL){
        file = fopen(FILENAME,"a");
        fclose(file); 
    }
    else {
        file = fopen(FILENAME,"w+");
        fclose(file);
    }
  
}


int main(){

    initFile();
    FILE *file;

    file= fopen(FILENAME,"a+");
    printf("%d\n",lineCount());
    for(int i = 0 ;i<5;i++){
        fprintf(file,"%d value\n",lineCount());
    }

    fclose(file);
    return 0;
}