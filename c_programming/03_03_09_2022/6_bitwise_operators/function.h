#include<stdio.h>

void inBinary(int number) //function to print binnary numbers
{
    unsigned i;
    for (i = 1 << 7; i > 0; i = i >> 1)
        (number & i) ? printf("1") : printf("0");
    printf("\n");
}

int bitAt(int number, int index) //functions that returns the bit at given index
{
    return (number << index) & 1;
}

int clearBit(int number, int index) //function that removes bit at given index
{
    return number & ~(1 << index);
}

int setBit(int number, int index) //function that sets bit at given index
{
    return number | (1 << index);
}

int reverseBit(int number, int index) //function that makes 0 to 1 or 1 to 0 at given position
{
    if (number & (1 << index))
    {
        return number & ~(1 << index);
    }
    else
    {
        return number | (1 << index);
    }
}