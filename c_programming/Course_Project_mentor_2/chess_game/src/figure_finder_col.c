#include<stdio.h>
#include"../include/read_from_file.h"
#include<string.h>
#include"../include/check_figure.h"
#include"../include/main.h"
#include"../include/figure_finder_col.h"




void printIDX(field *str,int size ){
    
    
    int row = 1;
    int column = 1 ;
    int counter =0;
    for(int i  =0;i<size*size;i++){
        if(column > size){
                        
                        column = 1;
                        row++;
             printf("\n");           
                        
 
                    }
            printf("row: %d col: %d ",str->x,str->y);
 
 
 
        counter++;
        str++;}
        str -=counter;
 
}












int figure_finder_col(field * chess_board, int size)
{
    int b = 0;
    int count = 0;
    int figure = check_figure(chess_board, size); // 1 - knight, 2 - queen, 3 - rook//

    for (int i = 0; i < size * size; i ++)
    {
        printf("x:%d y:%d\n", chess_board->x, chess_board->y);
        if (strcmp(chess_board->value, "k") == 0)
        {
            return chess_board->y;
        }
        if (strcmp(chess_board->value, "q"))
        {
            return chess_board->y;
        }
        if (strcmp(chess_board->value, "r"))
        {
            return chess_board->y;
        }

        chess_board ++;
        count ++;

    }


}
