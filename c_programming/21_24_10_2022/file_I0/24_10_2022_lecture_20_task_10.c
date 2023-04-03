/*
Задача 10. Изместете позицията си във файла 7 байта след
началото, ползвайки fseek.
int fseek(FILE *pfile, long offset, int original);
*/


#include <stdio.h>
#include <stdlib.h>
#define FILENAME "10.txt"
int main(void)
{
    FILE *file;
    file = fopen(FILENAME, "wt+");
    if (file == NULL)
    {
        return 1;
    }
    fputs("This is first row.\n", file);
    fseek(file, 7, SEEK_SET);
    fputs("And this is second.\n", file);
    fclose(file);
    return 0;
}