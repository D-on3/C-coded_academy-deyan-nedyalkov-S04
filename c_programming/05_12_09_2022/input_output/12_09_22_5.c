#include <stdio.h>

int main(void)
{
    char chared;
    while ((chared = getchar()) != '?')
    {
        if ((chared >= 'a' && chared <= 'z') || (chared >= 'A' && chared <= 'Z'))
        {
            putchar(chared);
        }
    }
    return 0;
}