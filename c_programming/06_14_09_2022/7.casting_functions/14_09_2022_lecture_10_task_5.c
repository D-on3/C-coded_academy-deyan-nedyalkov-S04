#include <stdio.h>


/*Пример за дефиниция на
функция без параметри*/
char function_name();

int main(){

function_name();
    return 0;
}

char function_name(){
int x = 10, y = 20;
return (char)(x + y);
}