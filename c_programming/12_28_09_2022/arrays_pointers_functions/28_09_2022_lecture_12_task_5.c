#include <stdio.h>
/*5.Напишете програма за търсене на определен елемент в даден масив, използвайки указатели.*/

int main()
{
    int arr[10] = {1, 3, 4, 5, 6, 10, 12, 8, 11, 9};

    int *p = arr;
    int searched = 5; 

    for (int i = 0; i < 10; i ++)
    {
        if (searched == *p)
        {
            printf("Searched num is in idx: %d ", i);
            break;
        }
        else
        {
           p++; 
        }
    }

    return 0;
}