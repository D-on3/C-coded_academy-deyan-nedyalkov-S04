#include<stdio.h>
#include"../
Vector_copy.h"
#include<stdlib.h>

int Init(Vector*v,int c  ){
    v = (Vector*)malloc(c*sizeof(Vector));
    if(v== NULL){
        puts("Not enought memm ");
        return -1;
    }
    return 1;
}
int getsize(const Vector *const v){
    return v->size;
}
int getcapacity(const Vector *const v){
    return v->capacity;
}

void myRealloc(Vector* v){}

int pushBack(Vector* ,int num){
    if(v->size == v->capacity)
    {
        myRealloc(num);
    }




    v->p[v->size + 1]= num;
    v->size++;
    return 1;
}

void printVector(const Vector*const v )
{
    for(int i  = 0 ;i<= v->size;){
        printf("%d",v->p[i]);
    }
}

int main(){


}