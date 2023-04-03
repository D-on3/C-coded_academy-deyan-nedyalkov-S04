#include<stdio.h>
#include<stdbool.h>


int main(){

//bool yes = (3>8);// for booleans we import stdbool.h
//printf("%D",yes);
    int usr_input;
    printf("Enter num :  ");
    scanf("\n %d",&usr_input);
// if else statements
    if(usr_input == 1 ){printf("Hello");}
    else if(usr_input == 2){printf("Poem");}
    else if(usr_input == 3 ){printf("Hidden massage in /home/$usr/.hidden/.hidden use sha256 to decrypt /home/$usr/.hidden/.to_decrypt ");}
    return 0;
}
