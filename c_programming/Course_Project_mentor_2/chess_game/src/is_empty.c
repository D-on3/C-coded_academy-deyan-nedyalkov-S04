#include"../include/read_from_file.h"
#include"../include/main.h"


int is_empty(field * chess_board, int size, int x, int y)
{
    for (int i = 0; size * size; i ++)
    {
        if ((chess_board->x == x) && (chess_board->y == y))
        {
            if (chess_board->value != "-")
            {
                return 1;
            }
        }
        chess_board ++;
    }
    return 0;
}
