/*Задача 2. Напишете функция за добавяне на елемент в дървото
рекурсивно с двоен указател, подаван като параметър:
 void insert(int x, struct tree **T) */
#include <stdio.h>
#include <stdlib.h>

typedef struct nodeTree t_nodeTree;
typedef struct nodeTree
{
    int data;
    struct nodeTree *left;
    struct nodeTree *right;
} t_nodeTree;

extern t_nodeTree *root;


void insert(int x, t_nodeTree **T)
{
    t_nodeTree *temp = NULL;
    if (!(*T))
    {
        temp = (t_nodeTree *)malloc(sizeof(t_nodeTree));
        temp->left = temp->right = NULL;
        temp->data = x;
        *T = temp;
        return;
    }
    if (x < (*T)->data)
    {
        insert(x, &(*T)->left);
    }
    else if (x > (*T)->data)
    {
        insert(x, &(*T)->right);
    }
}

void preorder(t_nodeTree *n)
{
    if (n)
    {
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}



 int main()
{
    t_nodeTree *root = NULL;
    insert(18, &root);
    insert(37, &root);
    insert(15, &root);
    insert(28, &root);
    preorder(root);
    return 0;
}