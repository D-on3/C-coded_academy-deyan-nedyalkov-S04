#include<stdio.h>

/* Задача 5*. Напишете програма, която проверява дали дадена матрица е identity matrix
 - матрица с размер (N x N), където само елементите в главния диагонал са единици,
 а всички останали елементи са нули. */

void is_identity(int matrix[][5], int row, int col)
{
    int flag = 0;

    for (int i = 0; i < row; i ++)
    {
        for (int r = 0; r < col; r ++)
            {
                if (matrix[i][r] != 1 && (i == r))
                {
                    flag = 1;
                    break;
                }
                else if ((matrix[i][r] != 0))
                {
                    flag = 1;
                    break;
                }
            }
    }

    if (flag == 1)
    {
        printf("Not a identity.\n");
    }
    else
    {
        printf("Matrix is identity.\n");
    }

}

int main()
{
    int matrix[][5] = {{1, 0, 0, 0, 0},
                       {0, 1, 0, 0, 0},
                       {0, 0, 1, 0, 0},
                       {0, 0, 0, 1, 0},
                       {0, 0, 0, 0, 1}};

    int x = 0;
    int y = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    is_identity(matrix, x, y);

    return 0;
}
