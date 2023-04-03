/*
Задача 3. Напишете програма, в която използвате функцията time(), за да принтирате всяка секунда. Използвайте alarm(), за да подадете сигнал за настъпила минута signal (SIGALRM,..). 
*/



#include <stdio.h>
#include <signal.h>
#include<unistd.h>

void handleSignal(int sign)
{
    printf("Handle signal %d\n", sign);
}

int main()
{
    signal(SIGABRT, handleSignal);
    signal(SIGINT, handleSignal);
    signal(SIGABRT, handleSignal);
    for (;;)
    {
        sleep(1);
    }
    return 0;
}