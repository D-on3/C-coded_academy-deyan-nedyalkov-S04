#include <stdio.h>
#include <stdlib.h>

/*Задача 4. Заделете динамично с malloc 
памет за char* buffer с размер size =
2. Въвеждайте символи от конзолата с getchar()
 ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да 
се препълни с realloc().
Прекъснете цикъла с Ctrl + Z. 
Принтирайте буфера и освободете паметта.*/

int main(){
int block = 2; // = size 
char *ptr =  (char*) malloc(block);
if(ptr ==NULL){
    printf("Error");
}
char *new_ptr = NULL;
int count = 0;
for(;;){

    if (count % block == 0 ){

        new_ptr = (char*) realloc(ptr,(count+block)*sizeof(char));

}
    *ptr = getchar();
    putchar(*ptr);
count ++;
ptr++;
}


free(ptr);
    return 0;
}