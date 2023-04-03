#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"../include/read_from_file.h"
#include"../include/main.h"

// 1 = knight ; 2 = queen ; 3 = rook

int AddPiece(field *chess_board,int size){
    int counter =0;



    char knight[2] = "k";
    char rook[2]  = "r";
    char queen[2] = "q";



    int row_input= 0;
    int column_input = 0;

    char piece[3]={};
    int temp = -1;

    do{


        scanf("%s",piece);
        scanf("%d",&row_input);
        scanf("%d",&column_input);

  

        if(column_input  > 0 &&  row_input > 0 ){
            if(column_input <= size && row_input <= size ){
                if(strcmp(piece,knight)==0){
                    temp  = 1;

                }
                else if(strcmp(piece,queen)==0){
                    temp = 2;
                }
                else if(strcmp(piece,rook)== 0){
                    temp = 3;
                }
                else{
                    printf("Invalid piece\n");
                }
                }
            else{
                   printf("Invalid coordinates: \n");
                    }
                }
        else{
            printf("Invalid coordinates: \n");
        }


    


    }while(temp < 0);




        int row = 0;
        int column = 0;
        
        int size_sqrd = size *size;
    for(int i  =0;i<size_sqrd;i++){
        if(column > size){  
            column = 1;
            row++;}


    if(row_input == row){
        if(column_input == column){
            strcpy(chess_board->value,piece);
        }
        }

                column++;
                chess_board++;
                counter++;

    }

    return temp;

}



void AddPawn(field *chess_board,int size){
    int counter =0;
    char piece[3] ="p";
    int row_input= 0;
    int column_input = 0;


 int forCheck = -2;


do{
            scanf(" %d",&row_input);
            scanf("%d",&column_input);

            if(column_input  > 0 &&  row_input > 0 ){
                if(column_input <= size && row_input <= size ){
                    forCheck += 3    ;    
            }}

            else{
                printf("Invalid coordinates\n");
            }


}while (forCheck < 0);





    int row = 0;
    int column = 0;
    
    int size_sqrd = size *size;
for(int i  =0;i<size_sqrd;i++){
    if(column > size)
    {  
        column = 1;
        row++;
    }

if(strcmp(chess_board->value,"-")== 0){
  if(row_input == row){
    if(column_input == column){
        strcpy(chess_board->value,piece);
    }
    }
}
            column++;
            chess_board++;
            counter++;

}

    chess_board -= counter;
}



int initPawns(field *chess_board,int size){
    int numberOfPawns= 0;
    scanf("%d",&numberOfPawns);


    for(int i = 0 ;i<numberOfPawns;i++){
        AddPawn(chess_board,size);
    }


}
