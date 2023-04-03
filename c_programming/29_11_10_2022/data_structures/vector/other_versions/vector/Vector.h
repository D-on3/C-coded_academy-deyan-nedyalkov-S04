

#ifndef Vector_h
#define Vector_h 

#include <stdio.h>

typedef struct Vector{
    int* p;
    int size;
    int capacity;
}Vector;


int Init(Vector*v );

//const from left pointer pointing to vector 
//const from right const pointer cant be changed
// pointer cont to struct cant be changed
int getsize(const Vector *const v);
int getcapacity(const Vector *const v);
int pushBack(Vector* ,int num);
#endif