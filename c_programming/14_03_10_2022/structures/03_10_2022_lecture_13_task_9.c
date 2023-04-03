/*Задача 9. Дефинирайте структура, 
в която има член указател към самата структура. Използвайте тази структура
, за да дефинирате две променливи, които се указват една друга.
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int var; 
    struct Node* next;
}Node;



int main(int argc ,char* argv[]){

    Node root= {};
    root.var = 15;
    root.next =malloc(sizeof(Node));
    root.next->var = root.var;
    root.next->next = NULL;

    printf("%d %d",root.var,root.next->var);

    free(root.next);
    

}