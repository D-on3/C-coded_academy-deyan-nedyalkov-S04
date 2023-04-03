#include <stdio.h>


/* Задача 15. Използвайте статична локална променлива, за да постигнете
същото поведение, описано в задача 14. */

int test(){
    static int var = 1;
    var++;
    printf("%d\n",var);
}


int main(){
    test();
    test();
    test();


return 0;

}

