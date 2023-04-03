/*Задача 3. Създайте test.txt файл в избрана от вас директория. Сложете
някакви данни в него на латиница - име, поздрав, брой. Отворете файла за
четене, като проверявате дали файла наистина е отворен. Използвайте
fgetc() , която взема само един символ от файла. Направете while цикъл,
за да изпишете всички символи, като проверявате за край на файл с EOF. */

#include<stdio.h>
#include<stdlib.h>



int main(){
    FILE *file;
    file = fopen("text.txt","r");

    char c ;
    c = fgetc(file);
    while ((c=fgetc(file)) != EOF)
    {   
        printf("%c", c);
        c = fgetc(file);

    }
    printf("\n");


fclose(file);

}