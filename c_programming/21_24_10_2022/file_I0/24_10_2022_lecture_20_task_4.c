/*Задача 4. Прочетете цял стринг от създадения вече файл, като използвате:
char *fgets(char * str, int nchars, FILE *stream).
Принтирайте прочетения стринг на екрана.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main(){
    FILE *file;
    
    file = fopen("some.txt","r");

    if(file == NULL) {
        return 1;
        }

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
    printf("%s",whole_file);
    fclose(file);
    return 0;

}