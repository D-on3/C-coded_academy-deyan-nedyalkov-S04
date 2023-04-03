#include <stdio.h>
/*
11. Напишете програма, която сортира масив, въведен от клавиатурата, използвайки указатели.
*/

int main()
{

    int arr[10] = {};
    int c = 0;
    for (int i = 0; i < 10; i ++)
    {
        scanf("%d", &c);
        arr[i] = c;
    }

    int *p1 = &arr[0];
    int *p2 = &arr[1];
    int d = 0;

    for (int i = 0; i < 9; i ++)
    {
        for (int j = 0; j < 9; j ++)
        {
            d = arr[j];
            p1 = &arr[j];
            p2 = &arr[j + 1];
            if (p1 > p2)
            {
                arr[j] = *p2;
                arr[j + 1] = d;
            }
            p1 ++;
            p2 ++;
            
        }
    }

    for (int i = 0; i < 10; i ++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}