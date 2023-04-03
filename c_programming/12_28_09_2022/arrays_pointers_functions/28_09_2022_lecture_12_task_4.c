#include <stdio.h>
/*
4.Напишете програма, която обръща местата на елементите в един масив, 
използвайки указатели.
*/

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = arr;
    int *p2 = &arr[9];

    int start = 0;
    int end = 9;

    while (start < end)
    {
        arr[start] = *p2;
        p2 --;
        start ++;
        end --;
    }    

    for (int i = 0; i < 10; i ++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}