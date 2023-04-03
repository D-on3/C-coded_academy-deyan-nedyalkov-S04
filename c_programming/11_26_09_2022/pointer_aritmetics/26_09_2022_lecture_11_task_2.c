/*Задача 2. Напишете програма, която чете съобщение от клавиатурата, след което го принтира в обратен ред, използвайки адресна аритметика.
*/
#include <stdio.h>




int main(){

    char string[50];
    scanf("%s",&string);
    char* ptr= &string;

int counter=0;
for(int i = 0;i > 0 ;i++){
    
}

for(int i;i<50;i++){
    
    ptr = 50;
    printf("%s",*ptr);
    ptr -= 1 ;
}


    return 0;
}