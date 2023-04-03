#include <stdio.h>


/*Задача 4. Специални символни литерали  (Escape sequences)*/

int main() { 
 
    int i;
    char arrEscChar[] = { '\t', '\n', '\r', '\v', '\\', '\'','\"', '\?', '\a', '\b', '\f' };


    for (i = 0; i < sizeof(arrEscChar); i ++) {
    printf("Escape Character %d '%c'\n",
    (int)(arrEscChar[i]), arrEscChar[i]);


     }

    return 0;
}