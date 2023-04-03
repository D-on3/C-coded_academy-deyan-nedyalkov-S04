#include<stdio.h>
#include<stdlib.h>
#include "../include/main.h"
#include "../include/read_input.h"




void printStruct(field *str,int size){
    int counter =1;

    for(int i  =0;i<size*size;i++){
            printf("\x1B[32m");
            printf("%s",str->value);
            str ++;
            if(counter % size == 0 && counter > 0 ){printf("\n");}
            
        


        counter++;}


}



void Wellcome(){


  printf("\x1B[32m");


printf("  ____ _   _ _____ ____ ____     ____    _    __  __ _____ \n");
printf(" / ___| | | | ____/ ___/ ___|   / ___|  / \\  |  \\/  | ____|\n");
printf("| |   | |_| |  _| \\___ \\___ \\  | |  _  / _ \\ | |\\/| |  _|\n"); 
printf("| |___|  _  | |___ ___) |__) | | |_| |/ ___ \\| |  | | |___\n") ; 
printf(" \\____|_| |_|_____|____/____/   \\____/_/   \\_\\_|  |_|_____|\n");




    
}



void EndGame(){



printf("__   _____  _   _  __        _____ _   _ \n");
printf("\\ \\ / / _ \\| | | | \\ \\      / /_ _| \\ | |\n");
printf(" \\ V / | | | | | |  \\ \\ /\\ / / | ||  \\| |\n");
printf("  | || |_| | |_| |   \\ V  V /  | || |\\  |\n");
printf("  |_| \\___/ \\___/     \\_/\\_/  |___|_| \\_|\n");
                                         

}