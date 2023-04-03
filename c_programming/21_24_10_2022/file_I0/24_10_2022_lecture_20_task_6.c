/*Задача 6. Отворете и прочетете съдържанието от файл с fscanf.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FILENAME "some1.txt"





typedef struct Numbers{
    int firstNumber;
    int secondNumber;
    int thirdNumber;
}number;

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
    FILE* file ;
    file = fopen("some1.txt","r+");
    int number_of_sets = lineCount();
    number* lines = (number *) calloc(number_of_sets,sizeof(int));
    int i = 0;

    for(i = 0;i<number_of_sets;i++){
        fscanf(file,"%d,%d,%d\n",&lines->firstNumber,&lines->secondNumber,&lines->thirdNumber);
        lines ++;
    }
    lines-=number_of_sets;
    i = 0;
    for(i = 0;i<number_of_sets;i++){
        printf("%d %d %d\n",lines->firstNumber,lines->secondNumber,lines->thirdNumber);
        lines ++;
    }

}