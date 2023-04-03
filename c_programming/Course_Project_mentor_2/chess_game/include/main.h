#ifndef main__H
#define main__H
#ifndef _STDIO_H
#include<stdio.h>
#endif
#ifndef _STDILIB_H
#include<stdlib.h>
#endif


typedef struct 
{
    int x; // row 
    int y; // col
    char value[2];

} field;


#endif