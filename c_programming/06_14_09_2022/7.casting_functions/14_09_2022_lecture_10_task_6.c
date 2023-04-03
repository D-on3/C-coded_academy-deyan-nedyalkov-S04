#include <stdio.h>

void sayHello(void){
printf("Hello world");
return; //не е задължително
}
int main(void){
sayHello();
return 0; //задължително
}