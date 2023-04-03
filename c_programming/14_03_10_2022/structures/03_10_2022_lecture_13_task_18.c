/*
Задача 18. Напишете програма, която търси данните на 
определен елемент в едностранно свързан списък. 
Принтирайте къде номера на листа, където са намерени.
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

void findInList(Node* head, int toFind) {
    int counter = 0;
    while (head != NULL)
    {
        if (head->num == toFind)
        {
            printf("Data found at Node %d\n", counter);
            return;
        }
        counter++;
        head = head->next;
    }
    puts("Data not found");
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

    puts("Enter data");
    initList(&head, size);

    int toFind;
    puts("Enter data(int) to find");
    scanf("%d", &toFind);

    findInList(head, toFind);

    freeList(head);

    return 0;
}
