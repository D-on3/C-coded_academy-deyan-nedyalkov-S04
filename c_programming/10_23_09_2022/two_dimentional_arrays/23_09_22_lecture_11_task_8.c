#include<stdio.h>

void find_max_submatrix(int arr[][6], int row, int col)
{
    int submatrix[][5] = {};
    int start_row = 0;
    int start_col = 0;
    int end_row = 0;
    int end_col = 0;

    for (int i = 0; i < row; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            if (arr[i][j] == 1 && start_row == 0 && start_col == 0)
            {
                start_row = i;
                start_col = j;
            }
            else
            {
                start_row = i;
                start_col = 0;
                end_row = 0;
                end_col = 0;
            }
        }
    }

    printf("Start row: %d \n", start_row);
    printf("Start col: %d \n", start_col);
    printf("End row: %d \n", end_row);
    printf("End col: %d \n", end_col);

}

int main()
{

    int arr[][6] = {{0, 1, 0, 1, 1},
                    {1, 1, 1, 1, 0},
                    {1, 1, 1, 1, 0},
                    {1, 1, 1, 1, 0},
                    {1, 1, 1, 1, 1},
                    {0, 1, 0, 1, 0}};


    find_max_submatrix(arr, 6, 5);

    return 0;
}
