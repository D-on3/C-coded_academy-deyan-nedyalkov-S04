// Упражнение 13. Increment / decrement operators
#include <stdio.h>



int main() {
    int iCounter = 0;
    while( ++ iCounter < 3 ) {
        printf("Counter %d\n", iCounter);
        printf("++ Counter: %d\n", ++ iCounter);
        printf("-- Counter: %d\n", -- iCounter);
        printf("Counter ++: %d\n", iCounter ++);
        printf("Counter --: %d\n", iCounter --);
    }
    return 0;
}

/* Какво става, ако се препълни броячът? */
//We are getting out of the loop because the variable iCounter is less than 3


