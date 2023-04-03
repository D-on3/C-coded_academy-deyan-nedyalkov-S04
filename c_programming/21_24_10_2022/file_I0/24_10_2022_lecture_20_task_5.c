/*Задача 5. Напишете програма, която чете числа от един текстов файл и ги
записва в друг текстов файл.*/

#include<stdio.h>
#include<stdlib.h>
#define FILENAME "5.txt"
#define FILENAME2 "5_SECOND.txt"

const char *record = "%d,%d,%d\n";


typedef struct Data{
    int a ;
    int b ;
    int c ;
}numbers;


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

int main(){


    FILE* file_input;
    FILE *file_output;
    file_input = fopen(FILENAME,"r+");
    file_output = fopen(FILENAME2,"a");
    int source_lenght=lineCount();
    numbers *list_of_numbers = (numbers *) calloc(source_lenght,sizeof(numbers));
// strtok can be used with nested for loops also
    for(int i  = 0 ;i<source_lenght;i++){
            fscanf(file_input,record,&list_of_numbers->a,&list_of_numbers->b,&list_of_numbers->c);
            fprintf(file_output,record,list_of_numbers->a,list_of_numbers->b,list_of_numbers->c);
            list_of_numbers ++;
        
    }
    fclose(file_input);
    fclose(file_output);

    return 0;
}