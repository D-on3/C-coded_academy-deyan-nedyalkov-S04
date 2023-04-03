#include <stdio.h>
#include <stdlib.h>

//Задача 1. Реализация на списък. Напишете програма, която добавя и //изтрива елемент от списък по позиция в списъка. Използвайте следния //елемент на динамичния списък:

typedef struct t_node {
  int m_nValue;
  struct t_node* m_pNext;
} t_node;

void printList(t_node* head)
{
    
    t_node* it = head;
    while(it != NULL)
    {
        printf("%d, ", it->m_nValue);
        it = it->m_pNext;
    }
}

void insertAtEnd(t_node* head, t_node* node){
    t_node* it = head;
    
    while(it->m_pNext != NULL)
    {
        it = it->m_pNext;
    }
    it->m_pNext = node;
}

void insertAtIdx(t_node* head, t_node* node, int idx)
{
    t_node* it = head;
    int counter = 0;
    while(it != NULL && counter != idx -1)
    {
        it = it->m_pNext;
        counter++;
    }
    
    if(it == NULL)
    {
        insertAtEnd(head, node);
        return;
    }
    
    node->m_pNext = it->m_pNext;
    it->m_pNext = node;
}

void releaseNodes(t_node** node)
{
    t_node** head = node;
    t_node* it = (*node)->m_pNext;
    t_node* toBeFreed = (*node);
    while(it != NULL)
    {
        free(toBeFreed);
        toBeFreed = it;
        it = it->m_pNext;
    }
    
    free(toBeFreed);
    *head = NULL;
}

void reverse(t_node* head)
{
    t_node* ptr1 = NULL;
    t_node* ptr2 = head;

    
    while(ptr2 != NULL)
    {
        
        ptr2 = ptr2->m_pNext;
        ptr3 =
    }
}

int main()
{
    t_node* head = (t_node*)malloc(sizeof(t_node));
    head->m_nValue = 1;
    head->m_pNext = NULL;
    
    t_node* node = (t_node*)malloc(sizeof(t_node));
    node->m_nValue = 2;
    node->m_pNext = NULL;
    insertAtEnd(head, node);
    
    node = (t_node*)malloc(sizeof(t_node));
    node->m_nValue = 3;
    node->m_pNext = NULL;
    insertAtEnd(head, node);
    
    node = (t_node*)malloc(sizeof(t_node));
    node->m_nValue = 4;
    node->m_pNext = NULL;
    insertAtEnd(head, node);
    
    node = (t_node*)malloc(sizeof(t_node));
    node->m_nValue = 5;
    node->m_pNext = NULL;
    insertAtEnd(head, node);
    
    node = (t_node*)malloc(sizeof(t_node));
    node->m_nValue = 8;
    node->m_pNext = NULL;
    insertAtEnd(head, node);
    
    printList(head);
    releaseNodes(&head);
    
    printList(head);
    
    
  return 0;
}