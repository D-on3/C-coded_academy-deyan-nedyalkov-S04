#include <stdio.h>

int main(){
    char character ='!';
    while(character !='?'){
        character =getchar();
        if((character >=97 && character <=122) || (character >=65 && character <=90)){
            putchar(character);
        };
    }
    return 0;
}