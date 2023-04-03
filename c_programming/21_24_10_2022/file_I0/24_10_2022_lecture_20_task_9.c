/*Задача 9. Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);*/



#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = NULL;
    fp = fopen("9.txt", "wt+");
    if (fp == NULL)
    {
        perror("Error\n");
        exit(1);
    }
    fputs("This is my first string.\n", fp);
    fputs("Write something here.", fp);
    fpos_t *position;
    if (fgetpos(fp, position) == 0)
    {
        printf("The position is: %ld\n", *position);
    }
    else
    {
        printf("ERROR!\n");
    }
    fclose(fp);
    return 0;
}