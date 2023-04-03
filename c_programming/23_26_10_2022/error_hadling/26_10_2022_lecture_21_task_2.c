/*Задача 2.
Напишете функция, принтираща сигналите, които й се подават. 
Обработка на сигнали signal.h*/

#include <signal.h> 
#include <stdlib.h>
#include <stdio.h>

void SignalPrinter(int signum)
{
    switch (signum)
    {
        case SIGSEGV:
            printf("Seg. fault signal caught!");
            exit(1);
        break;

        case SIGINT:
            printf("CTRL+C detected!");
            exit(1);
        break;

    }
}

int main()
{
    int *pointy = NULL;
    signal(SIGSEGV, SignalPrinter);
    signal(SIGINT, SignalPrinter);
   /*Linux only: signal(SIGQUIT, SignalPrinter);*/
    while(1)
    {
        *pointy = 1;
    }

}

