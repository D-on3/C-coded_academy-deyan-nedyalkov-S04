#include<stdio.h>


void find_unique(int arr[][5], int row, int col)
{
    int count = 0;
    int current_row[5] = {};
    int flag = 0;
    int last_row[5] = {};
    int next_row[5] = {};

    for (int i = 1; i < row; i ++)
    {

        // take current and last row.//
        for (int j = 0; j < col; j ++)
        {
            last_row[j] = arr[i - 1][j];
            current_row[j] = arr[i][j];
            next_row[j] = arr[i + 1][j];


        }
        // comare current with last and next row.//


    }

    printf("%d", count);
}


int main()
{
    int arr[][5] = {{0, 1, 0, 1, 1},
                {1, 1, 1, 1, 0},
                {1, 1, 1, 1, 0},
                {1, 1, 1, 1, 0},
                {1, 1, 1, 1, 0},
                {0, 1, 0, 1, 0}};

    find_unique(arr, 5, 5);



    return 0;
}
