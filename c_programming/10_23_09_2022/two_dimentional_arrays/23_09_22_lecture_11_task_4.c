#include<stdio.h>

// Sum rows and cols with custom number 4. (Print results for 4 rows and 4 cols).//

void sum_rows_and_cols(int arr[][5], int row, int col)
{
    int first_row = 0;
    int second_row = 0;
    int third_row = 0;
    int fourth_row = 0;
    int first_col = 0;
    int second_col = 0;
    int third_col = 0;
    int fourth_col = 0;

    for (int i = 0; i < row; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            if (i == 0)
            {
                first_row += arr[i][j];
            }
            else if (i == 1)
            {
                second_row += arr[i][j];
            }
            else if (i == 2)
            {
                third_row += arr[i][j];
            }
            else if (i == 3)
            {
                fourth_row += arr[i][j];
            }

            if (j == 0)
            {
                first_col += arr[i][j];
            }
            else if (j == 1)
            {
                second_col += arr[i][j];
            }
            else if (j == 2)
            {
                third_col += arr[i][j];
            }
            else if (j == 3)
            {
                fourth_col += arr[i][j];
            }
        }

    }

    printf("First row sum: %d \n", first_row);
    printf("Second row sum: %d \n", second_row);
    printf("Third row sum: %d \n", third_row);
    printf("Fourth row sum: %d \n", fourth_row);
    printf("First col sum: %d \n", first_col);
    printf("First col sum: %d \n", second_col);
    printf("Third col sum: %d \n", third_col);
    printf("Fourth col sum: %d \n", fourth_col);

}


int main()
{

    int row = 0;
    int col = 0;

    printf("Enter desired rows. \n");
    scanf("%d", &row);
    printf("Enter desired cols. \n");
    scanf("%d", &col);

    int arr[][5] = {};
    int n = 0;


    // Read inputed nums for matrix. //
    for (int i = 0; i < row; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            scanf("%d", &n);
            arr[i][j] = n;
        }
    }

    // Print matrix. //
    for (int i = 0; i < row; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Cal sum function. //
    sum_rows_and_cols(arr, row, col);



    return 0;
}
