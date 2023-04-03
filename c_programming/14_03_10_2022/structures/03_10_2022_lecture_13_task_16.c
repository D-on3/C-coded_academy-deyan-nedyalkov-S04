/*
Задача 16. Напишете програма, 
която изтрива първия лист на едностранно свързан списък. 
Принтирайте резултатния списък.

*/



#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node
{
    int num;
    Node* next;
};

void initList(Node** head, int size) {
    // set Node's data
    for (int i = 0; i < size; i++)
    {
        Node* newNode = (Node*)malloc(sizeof(Node));
        scanf("%d", &(newNode->num));
        // make newNode the new head and point to old head
        newNode->next = *head;
        *head = newNode;
    }
}

void printList(Node* head) {
    Node* ptr = head;
    while (ptr != NULL)
    {
        printf("Node data: %d\n", ptr->num);
        ptr = ptr->next;
    }
    
}

void delete_frontNode(Node** head) {
    Node* p_Node = (*head)->next;
    free(head); // free the "deleted" Node
    *head = p_Node; // make the next Node the new head
}

void freeList(Node* head) {
    // free the whole list
    Node* ptr;
    while (head != NULL)
    {
        ptr = head;
        head = head->next;
        free(ptr);
    }
}

int main() {
    int size;
    Node* head = NULL;

    puts("Enter list size");
    scanf("%d", &size);

    puts("Enter list data");
    initList(&head, size);

    delete_frontNode(&head);

    printList(head);

    freeList(head);

    return 0;
}
