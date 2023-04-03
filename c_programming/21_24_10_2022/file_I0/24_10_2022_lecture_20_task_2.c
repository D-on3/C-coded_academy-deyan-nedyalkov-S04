/*Задача 2. Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница - име, поздрав, брой. Отворете файла с
текстов редактор, за да се убедите, че данните са записани. */
#include<stdio.h>


#define FILENAME "2.txt"

int main()
{

    FILE *file;
    char buffer[255];

    file = fopen(FILENAME, "r");

    if (file == NULL)
    {
        return 1;
    }

    fgets(buffer, sizeof buffer, file);
    printf("%s", buffer);

    fclose(file);

    return 0;
}