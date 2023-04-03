#include<stdio.h>
#include<stdlib.h>

void print_matrix(int arr[][4], int row, int col)
{
    for (int i = 0; i < row; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}


void searchNum(int arr[][4], int row, int col, int num){
    for (int i = 0; i < row; i ++)
    {
        for (int j = 0; j < col; j ++)
        {
            if (arr[i][j] == num)
            {
                printf("Searced num is in row %d and col %d positions .\n", i, j);
            }
        }
    }
}

int main(){

    int arr[][4] = {};
    int temp = 0;

    for (int i = 0; i < 4; i ++)
    {
        for (int j = 0; j < 4; j++)
        {
            temp = rand();
            arr[i][j] = temp;
        }
    }

    int *p = &arr[0][0];

    // sort. //
    for (int i = 0; i < 3; i ++){
        for (int j = 0; j < 3; j ++)
        {
            if (arr[i][j] > arr[i][j + 1])
            {
                *p = &arr[i][j + 1];
                arr[i][j] = arr[i][j + 1];
                arr[i][j + 1] = *p;
            }
        }
    }

    print_matrix(arr, 5, 5);
    int n = 0;
    printf("Enter searched num: \n");
    scanf("%d", &n);
    search_num(arr, 5, 5, n);

    return 0;
}

