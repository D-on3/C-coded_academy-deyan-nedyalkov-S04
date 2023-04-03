/*
Задача 8. Намерете позицията си във файла, като използвате:
long ftell(FILE *pfile);
Преместете се няколко пъти напред и назад на различни позиции.


*/
#include <stdio.h>
#include <stdlib.h>
#define FILENAME "8.txt"



int main()
{
    int fpos = 0;
    fpos_t position;
    FILE *file;
    file= fopen(FILENAME, "a+");

    if(file==NULL){
        return 1;
    }
    else
    {
        fprintf(file, "\n%d\t%d\t", 1, 2);   
    }

    fpos = ftell(file);

    fgetpos(file, &position);

    printf("\nFile position bytes \t %d\n", fpos);
    printf("File size is \t%ld", position.__pos);
        fclose(file);

}