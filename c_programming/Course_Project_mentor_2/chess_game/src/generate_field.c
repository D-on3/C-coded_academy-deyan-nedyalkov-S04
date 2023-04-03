#include"../include/main.h"
#include<string.h>

field *initBoard(int size ){




    int row = 1;
    int column = 1 ;
    int  counter= 0;
    int size_sqrd = size *size;
    field *chess_board = (field *) calloc(size_sqrd, sizeof(field));



    for(int i  =0;i<size_sqrd;i++){
        if(column > size){
                        
                        column = 1;
                        row++;
                        

                    }



                char ptr[2] = "-"; 
                strcpy(chess_board->value,ptr);
                chess_board->x = row;
                chess_board->y = column;
                column++;
                chess_board++;
                counter++;

    }

    chess_board -= counter;

    return chess_board;
}
