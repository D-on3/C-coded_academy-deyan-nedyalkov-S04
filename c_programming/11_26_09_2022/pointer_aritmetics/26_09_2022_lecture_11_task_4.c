#include<stdio.h>

// copy one array from another and print it. //

void copy(char *to, char *from)
{
    static int i = 0;
    static char array[5] = {};

    if (*from == '\0')
    {
        for(int j = 0; j < 5; j ++)
        {
            printf("%c", to[j]);
        }
        printf("\n");
        for (int j = 0; j < 5; j ++)
        {
            printf("%c", array[j]);
        }
        return;
    }
    else
    {
        to[i] = *from;
        array[i] = *from;
        from ++;
        i ++;
        return copy(to, from);
    }

}

int main()
{
    char arr[5] = {};
    char *to = &arr;

    copy(to, "stop");

    return 0;
}
