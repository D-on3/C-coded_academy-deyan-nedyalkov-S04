#include <stdio.h>

int main()
{
    char character ='!';
    int LetterCounter = 0;
    int NumberCounter = 0;

    while(character !=EOF)
    {
        character =getchar();
        if((character >=97 && character <=122) || (character >=65 && character <=90))
        {
            LetterCounter++;
        }
        else if((character >=48 && character <=57))
        {
            NumberCounter++;
        }
    }
    printf("You entered %d letters and %d numbers.\n", LetterCounter, NumberCounter);
    return 0;
}