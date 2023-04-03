/*
Задача 4. Напишете програма, която обработва Ctrl+C, Ctrl+D, Ctrl+Z.
*/

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handleSignal(int sign)
{
    printf("Handle signal %d \n", sign);
}

int main(void)
{
    for (;;)
    {
        signal(SIGINT, handleSignal);
        signal(EOF, handleSignal);
        sleep(1);
    }
    return 0;
}