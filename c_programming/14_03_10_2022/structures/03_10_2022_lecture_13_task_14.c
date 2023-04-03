/*Задача 14. Напишете програма, която въвежда нов лист
в края на едностранно свързан списък. Принтирайте резултатния списък.*/


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

void push_backNode(Node** firstHead, Node* secondHead) {
    Node* p_front = *firstHead; // to get the last Node
    Node* p_back = *firstHead; // to reach the end of the list

    while (p_front != NULL)
    {
        // get to the end of the list
        p_back = p_front;
        p_front = p_front->next;
    }

    p_back->next = secondHead; // make the last Node point to the new Node
    // new last Node's next already points to NULL so we dont have to change it
}

int main() {
    int size;
    puts("Enter size of list");
    scanf("%d", &size);

    Node* firstHead = NULL;
    Node* secondHead;

    puts("Enter first list data");
    initList(&firstHead, size);
    
    puts("Enter Node data to push at back");
    secondHead->next = NULL;
    scanf("%d", &secondHead->num);

    push_backNode(&firstHead, secondHead);
    printList(firstHead);
    
    freeList(firstHead);

    return 0;
}
