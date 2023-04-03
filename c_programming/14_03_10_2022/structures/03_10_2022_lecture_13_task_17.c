/*Задача 17. Напишете програма, която изтрива средния лист на
 едностранно свързан списък. 
Принтирайте резултатния списък.*/


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

void delete_middleNode(Node** head, int size) {
    Node* p_front = *head;
    Node* p_back = *head;
    int middle = size/2; // get middle Node

    for(int i = 0; i < middle; i++)
    {
        // iterate with 2 pointers
        // front ptr will be 1 step ahead of back ptr
        p_back = p_front;
        p_front = p_front->next;
    }
    p_back->next = p_front->next; // make the ptr behind the "deleted" Node point to the next Node
    free(p_front); // free the "deleted" Node
}

int main() {
    int size;
    Node* head = NULL;

    puts("Enter size of list");
    scanf("%d", &size);

    puts("Enter list data");
    initList(&head, size);

    delete_middleNode(&head, size);

    printList(head);
    
    freeList(head);

    return 0;
}
