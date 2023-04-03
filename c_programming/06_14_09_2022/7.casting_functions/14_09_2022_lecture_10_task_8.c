/*Когато подаваме параметри на функция, която е декларирана, че не приема
параметри се получава грешка при компилация:*/

#include <stdio.h>

void sayHello(void);
int main(void){
sayHello();//OK
//sayHello(100); //Error
//printf("%d", sayHello()); //Error
}
void sayHello(){
printf("Hello world");
}