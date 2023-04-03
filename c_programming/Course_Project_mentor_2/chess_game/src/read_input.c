#include <stdio.h>
#include<string.h>
#include"../include/read_from_file.h"
#include"../include/place_pieces.h"
#include"../include/knight.h"
#include"../include/rook.h"
#include"../include/queen.h"
#include"../include/print_field.h"
#include"../include/write_to_file.h"
#include"../include/end_game.h"

/*ul – up left
ur – up right
ru – right up
rd – right down
dl – down left
dr – down right
lu – left up
ld – left down*/




void menuKnight(field * chessBoard, int size){

    int forCheck = 100;
    static int times_moved= 0;

    do{     char ch[4] ={};
            scanf("%s",ch);

          

            if((strcmp(ch,"ul"))== 0){
                up_left(chessBoard,size);
                system("clear");
                writeMovesToFileKnight("ul");
                printStruct(chessBoard,size);
                forCheck =iSitOver(chessBoard,size);
                }
            else if((strcmp(ch,"ur"))== 0){

                up_right(chessBoard,size);
                system("clear");
                writeMovesToFileKnight("ur");
                printStruct(chessBoard,size);
                forCheck =iSitOver(chessBoard,size);
            }
            
            else if((strcmp(ch,"ru"))== 0){
                right_up(chessBoard,size);
                system("clear");
                writeMovesToFileKnight("ru");
                printStruct(chessBoard,size);
                forCheck =iSitOver(chessBoard,size);
            }
            else if((strcmp(ch,"rd"))== 0){
                right_down(chessBoard,size);
                system("clear");
                writeMovesToFileKnight("rd");
                printStruct(chessBoard,size);
                forCheck =iSitOver(chessBoard,size);
            }
            else if((strcmp(ch,"dl"))== 0){ 
                down_left(chessBoard,size);
                system("clear");
                writeMovesToFileKnight("dl");
                printStruct(chessBoard,size);
                forCheck =iSitOver(chessBoard,size);
            }
            else if((strcmp(ch,"dr"))== 0){ 
                down_right(chessBoard,size);
                system("clear");
                writeMovesToFileKnight("dr");
                printStruct(chessBoard,size);
                forCheck =iSitOver(chessBoard,size);
            }
            
            
            else if((strcmp(ch,"lu"))== 0){ 
                left_up(chessBoard,size);
                system("clear");
                writeMovesToFileKnight("lu");
                printStruct(chessBoard,size);
                forCheck =iSitOver(chessBoard,size);
                }
            else if((strcmp(ch,"ld"))== 0){ 
                left_down(chessBoard,size);
                system("clear");
                writeMovesToFileKnight("ld");
                printStruct(chessBoard,size);
                forCheck =iSitOver(chessBoard,size);
                }

            else{printf("invalid input \n");}
            times_moved ++;

            

    }while(forCheck != 0);
        EndGame();
        writeFinalMoves(times_moved);
        printf("You Win\nNumber of turns %d\nTurns made:\t\n",times_moved);
        read_file_to_one_string();

}

/*Queen input:
r 5 – right 5 squares
u 5 – up 5 squares
l 5 – left 5 squares
d 5 – down 5 squares
ur 5– up-right diagonal 5 squares
ul 5 – up-left diagonal 5 squares
dr 5 – down-right diagonal 5 squares
dl 5 – down- left diagonal 5 squares*/



void menuQueen(field * chessBoard, int size){

    int forCheck = 100;
    static int turns=0; 
    do{        
            char ch[4] ={} ;
            int move = 0;
            scanf("%s",ch);
            scanf("%d",&move);


            if((strcmp(ch,"r"))== 0){
                queen_right(chessBoard,size, move);
                system("clear");

                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
                }
            else if((strcmp(ch,"u"))== 0){
                queen_up(chessBoard,size, move);
                system("clear");

                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
                }
            else if((strcmp(ch,"l"))== 0){
                queen_left(chessBoard,size, move);
                system("clear");

                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
                }
            else if((strcmp(ch,"d"))== 0){
                queen_down(chessBoard,size,move);
                system("clear");

                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
                }

            else if((strcmp(ch,"ur"))== 0){
                queen_upright(chessBoard,size,move);
                system("clear");

                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
                }
            else if((strcmp(ch,"ul"))== 0){
                queen_upleft(chessBoard,size,move);
                system("clear");
 
                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
                }
            else if((strcmp(ch,"dr"))== 0){
                queen_downright(chessBoard,size,move);
                system("clear");

                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
            }
            else if((strcmp(ch,"dl"))== 0){
                queen_downleft(chessBoard,size,move);
                system("clear");

                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
                }
            else{printf("invalid input \n");}
                        turns ++;

            

    }while(forCheck != 0);
        EndGame();
        writeFinalMoves(turns);
        printf("You Win\nNumber of turns %d\nTurns made:\t\n",turns);
        read_file_to_one_string();
}

/*Rook input:
r 5 – right 5 squares
u 5 – up 5 squaresl 
5 – left 5 squares
d 5 – down 5 squares*/


void menuRook(field * chessBoard, int size){

    int forCheck = 100;
    static int turns=0; 

            

    do{     char ch[2] ={} ;
            int move = 0;
            scanf("%s",ch);
            scanf("%d",&move);

            if((strcmp(ch,"r"))== 0){
                rook_right(chessBoard,size, move );
                system("clear");

                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
                }
            else if((strcmp(ch,"u"))== 0){ 
                rook_up(chessBoard,size, move );
                system("clear");
                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
            }
            else if((strcmp(ch,"l"))== 0){ 
                rook_left(chessBoard,size, move );
                system("clear");

                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
                }
            else if((strcmp(ch,"d"))== 0){ 
                rook_down(chessBoard,size, move );
                system("clear");

                printStruct(chessBoard,size);
                writeMovesQueenRook(ch,move);
                forCheck =iSitOver(chessBoard,size);
                }
            else{printf("invalid input \n");}
            
                        turns ++;


    }while(forCheck != 0);
        EndGame();
        writeFinalMoves(turns);
        printf("You Win\nNumber of turns %d\nTurns made:\t\n",turns);
        read_file_to_one_string();
}
