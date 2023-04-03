#include <stdio.h>

int main(){
    int character ;
while (( character = getchar()) != EOF) {
    if (character  != ' ') {
        putchar(character );
    } else {
        character  = getchar();
        if (character  == ' ') {
            putchar(' ');
        } else {
            putchar(' ');
            putchar(character );
        }
   }
}
}