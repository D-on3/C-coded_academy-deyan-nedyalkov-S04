#include<stdio.h>
#include<stdlib.h>



/*Задача 2.  Пренапишете горния код като работите с 
аритметика с указатели.*/




int main(int argc, char *argv[]){

    argv = argv + argc-1;
    for(int i = argc-1 ;i>0;argv--,i--)
    {   if(*argv == argv[argc])
            {break;}
        printf("%s ",*argv);
    }
    printf("\n");


    return 0;
}