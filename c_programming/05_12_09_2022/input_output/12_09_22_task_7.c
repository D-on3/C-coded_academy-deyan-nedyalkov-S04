#include <stdio.h>

int main()
{
    char character ;
    int Counter = 0;
    char String[80];

    while((character =getchar())!=EOF)
    {
        for(int i=0; i<=10; i++)
        {
            if(i<10 && character =='\n')
            {
                character =0;
            }
            if(i>=10 && character =='\n')
            {
                putchar(character );
            }

        }
    }
}