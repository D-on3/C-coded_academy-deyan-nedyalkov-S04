//Упражнение 10*. Напишете функция int isLetter(char c), която проверява
//дали подадения параметър е буква или не е буква от ASCII таблицата.
//ASCII value of uppercase alphabets – 65 to 90. ASCII value of lowercase alphabets – 97 to 122.
#include <stdio.h>

int isLetter(char c){
    int temp = (int)c;
    printf("%i\n",temp);
    if( 65 >= temp >= 90 ||  97 <= temp >=  122 ){
        printf("Its a letter\n");
    }
    else{
        printf("Its not a letter\n");
    }

}


int main(){

    char cUsrInput=0;
    printf("Enter number: ");
    scanf("%c",&cUsrInput);
    isLetter(cUsrInput);

    return 0;
}