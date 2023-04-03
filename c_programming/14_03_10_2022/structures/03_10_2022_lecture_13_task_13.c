/*Задача 13. Напишете програма, която въвежда нов лист в началото на 
едностранно свързан списък. Принтирайте резултатния списък.*/
#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int num;
    Node* next;
};
typedef struct Node Node;
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

void concatLists(Node** firstHead, Node* secondHead) {
    Node* p_front = *firstHead; // to get the last Node
    Node* p_back = *firstHead; // to reach the end of the list

    while (p_front != NULL)
    {
        // get to the end of the list
        p_back = p_front;
        p_front = p_front->next;
    }

    p_back->next = secondHead; // make last Node point to the second list
}

int main() {
    int size;
    puts("Enter size of lists");
    scanf("%d", &size);

    Node* firstHead = NULL;
    Node* secondHead = NULL;

    puts("Enter first list data");
    initList(&firstHead, size);

    puts("Enter second list data");
    initList(&secondHead, size);

    concatLists(&firstHead, secondHead);

    printList(firstHead);
    
    freeList(firstHead);

    return 0;
}
