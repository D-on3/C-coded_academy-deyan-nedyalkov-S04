#include <stdio.h>

/*Задача 1. Напишете функция, която печата низ, като принтирате всеки символ поотделно. Указателя към началото му е подаден като аргумент на функцията void printstr(char *s); Не забравяйте, низът винаги завършва с знак за терминираща нула '\0', затова проверката в цикъла, който принтира всеки символ, трябва да е докато не се стигне този знак.
*/



void counter(char* s){
    if(*s = '\n'){
        return;
    }
    printf("%d",*s);
    counter(s+1);
}

int main(){

counter("When is bad is really bad!");
return 0 ;

}