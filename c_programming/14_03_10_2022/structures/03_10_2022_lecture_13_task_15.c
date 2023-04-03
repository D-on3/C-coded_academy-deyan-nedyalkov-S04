/*Задача 15. Напишете програма, 
която въвежда нов лист в средата на едностранно свързан списък. 
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

void push_middleNode(Node** firstHead, Node** secondHead, int size) {
    Node* p_front = *firstHead;
    Node* p_back = *firstHead;
    int middle = size/2;

    for(int i = 0; i < middle; i++)
    {
        p_back = p_front;
        p_front = p_front->next;
    }

    p_back->next = *secondHead; // make the middle-1 Node point to the new middle Node
    (*secondHead)->next = p_front; // make the new middle Node point to previous middle Node
}

int main() {
    int size;
    puts("Enter size of list");
    scanf("%d", &size);

    Node* firstHead = NULL;
    Node* secondHead;

    puts("Enter list data");
    initList(&firstHead, size);
    
    puts("Enter Node data to push at middle");
    secondHead->next = NULL;
    scanf("%d", &secondHead->num);

    push_middleNode(&firstHead, &secondHead, size);
    printList(firstHead);
    
    freeList(firstHead);

    return 0;
}
