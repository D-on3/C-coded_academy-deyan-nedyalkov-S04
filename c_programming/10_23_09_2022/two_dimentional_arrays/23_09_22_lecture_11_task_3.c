#include<stdio.h>

// Void function for actual job in that task. Comparing matrixes. //

void compare_matrix(int arr_1[][5], int arr_2[][5], int row, int col)
{
    int flag = 0;

    for (int i = 0; i < row; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            if (arr_1[i][j] != arr_2[i][j])
            {
                flag = 1;
                break;
            }

        }
        if (flag == 1)
        {
            break;
        }
    }

    if (flag == 1)
    {
        printf("Different matrixes. \n");
    }
    else
    {
        printf("Identical matrixes. \n");
    }

    print_matrix(arr_1, row, col);
    print_matrix(arr_2, row, col);

}

// Once again - funcion for printing matrixes. //

void print_matrix(int arr[][5], int row, int col)
{
    printf("\n");
    for (int i = 0; i < row; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}



int main()
{

    int arr_1[][5] = {{1, 2, 3, 4},
                      {1, 2, 3, 4},
                      {1, 2, 3, 4},
                      {1, 2, 3, 4},
                      {1, 2, 3, 4}};
    int arr_2[][5] = {{1, 2, 3, 4},
                      {1, 2, 3, 4},
                      {1, 2, 3, 4},
                      {1, 2, 3, 4},
                      {1, 2, 3, 4}};

    int row = 0;
    int col = 0;
    scanf("%d", &row);
    scanf("%d", &col);

    compare_matrix(arr_1, arr_2, row, col);

    return 0;
}
