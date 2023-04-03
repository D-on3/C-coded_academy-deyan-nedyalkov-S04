#include <stdio.h>
#include <string.h>
char* months[] = {"jan","feb","mar","apr","may","jun","jul","aug","sep","oct","nov","dec"};

int main()
{
    printf("\n");
    printf("Get Number By Month (type first 3 letters): ");
    char str[3];
    scanf("%s",str);
    int i;
    for(i=0; i<12; i++)
    {
        if(!strcmp(str,months[i]))
        {
            printf("Your month number is: %d",i+1);
        }
    }
    return 0;
}