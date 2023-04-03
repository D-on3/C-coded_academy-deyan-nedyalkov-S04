/*Задача 11. Напишете програма, 
която създава и принтира едностранно свързан списък.
 Броя на листата в списъка да бъде въведен потребителя.
 Данните за всеки лист - също.*/


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

int main() {
    int size;
    Node* head = NULL;

    puts("Enter list size");
    scanf("%d", &size);

    puts("Enter list data");
    initList(&head, size);

    printList(head);

    freeList(head);

    return 0;
}
