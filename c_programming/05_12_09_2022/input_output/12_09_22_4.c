#include <stdio.h>

int main(void)
{
    char chared;
    int flag = 1;
    while ((chared = getchar()) != EOF)
    {
        if (chared == ' ')
        {
            if (flag == 1 && chared == ' ')
            {
                continue;
            }
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        putchar(chared);
    }
    return 0;
}