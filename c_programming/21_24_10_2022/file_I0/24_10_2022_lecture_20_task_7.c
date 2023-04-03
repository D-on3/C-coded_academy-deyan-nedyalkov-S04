
/*Задача 7. Напишете текст с форматиращ параметър, като използвате:
int fprint(FILE* stream, const char *forma…);*/
#include<stdio.h>

const char *record = "%s,%s,%d\n";




int main(){
    FILE *file;
    file = fopen("7.txt","a+");
    
    char firtname[16];
    char lastname[16];
    int age;
    scanf("%s %s %d",firtname,lastname,&age);
    fprintf(file,record,firtname,lastname,age);

    fclose(file);
}