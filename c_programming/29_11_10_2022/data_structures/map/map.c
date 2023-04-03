
#include "Map.h"
#include <string.h>
#include "stdlib.h"
#include <stdio.h>
typedef struct LNode* LNode;
struct LNode {
    const char* key;
    void* val;
    LNode next;
};

typedef struct Map {
    LNode head;
    void* (*cpy_element)(void*);
    void (*fre_element)(void*);
};



Map MapCreate(void* (*cpy)(void*), void (*fre)(void*)){
    Map m = calloc( sizeof(Map) ,1);
    
    if(m == NULL){
        printf("%s%d%lu","Failed to allocate\t" ,__LINE__,sizeof(Map));
        exit(1);
    }
    m->head = NULL;
    m->cpy_element = cpy;
    m->fre_element = fre;
    
    return m;
    
}
void MapDestroy(Map m){
    LNode begin = m->head;
    LNode next = begin->next;
    while (begin){
        free((char *)begin->key);
        free(begin->val);
        free(begin);
        begin = next;
    }
    free(m);
}

void MapRemove(Map m, const char* key){
    if(!MapSize(m)) return;

    LNode current = m->head;
    LNode prev;
    LNode next;

    while( current ){
        if(strcmp(current->key,key)){
            free((char*)current->key);
            free(current->val);
            next = current ->next;
            free(current);
            break;
        }
        else{
            prev = current;
            current = current->next;
        }
    }
}


int MapSize(Map m){
    if(m == NULL) return 0;
    int i=0;
    LNode next = NULL;
    
    while((next = m->head)){
        ++i;
    }
    return i;
}

bool MapAdd(Map m, const char* key, void* val){
    if(m == NULL) return false;
    LNode next = m->head;

    for (; next!=NULL ; next = next->next);
    
    next = calloc( sizeof(LNode), 1);
    
    if(next == NULL){
        printf("%s%d%lu","Failed to allocate\t" ,__LINE__,sizeof(LNode));
        exit(1);
    }
    
    next->key = m->cpy_element((char *)key);
    next->val = m->cpy_element(val);
    return true;
    
    
}



void* MapRetrieve(Map m, const char* key){
    if(m == NULL) return NULL;
    
    LNode next = m->head;
    while(next){
        if(strcmp(next->key,key) == 0) return next->val;
    }
    
    return NULL;
    
    
}