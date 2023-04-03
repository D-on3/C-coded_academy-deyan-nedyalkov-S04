#include<stdio.h>
#include"../include/main.h"
#include"../include/read_from_file.h"
#include"../include/generate_field.h"
#include"../include/place_pieces.h"
#include"../include/generate_field.h"
#include"../include/print_field.h"
#include"../include/read_input.h"
#include"../include/knight.h"
#include"../include/queen.h"
#include"../include/rook.h"
#include"../include/read_from_file.h"
#include<unistd.h>




int main(){


    Wellcome();

    int size ;
    scanf("%d", &size);
    field * chessBoard = (field *) calloc (size* size,sizeof(field));
    if(chessBoard == NULL ){
        printf("Mem Errp \n");
        return 1 ;
    }
    chessBoard= initBoard(size);
    int piece= 0;
    piece = AddPiece(chessBoard,size);
    initPawns(chessBoard,size);
    system("clear");
    printStruct(chessBoard,size);
   
   switch(piece)
   {
    case 1 : menuKnight(chessBoard,size);break;
    case 2 : menuQueen(chessBoard,size);break;
    case 3 : menuRook(chessBoard,size);break;
    default:
        break;
   }
   

}