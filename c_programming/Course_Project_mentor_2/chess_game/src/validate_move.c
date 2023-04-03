#include<stdio.h>


int validate_move(int size, int x, int y)
{
    return ((0 <= x) && (x < size)) && ((0 <= y) && (y < size));
}


