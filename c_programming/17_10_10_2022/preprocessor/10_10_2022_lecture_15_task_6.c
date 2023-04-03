/*Задача 6. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ”*/

// https://web.mit.edu/rhel-doc/3/rhel-gcc-en-3/variadic-macros.html

#include <stdio.h>

#define print()fprintf(stderr,"Trace: ");

#define eprintf(...) fprintf (stderr, __VA_ARGS__);



int main(){

    
    print();

    const char * a= "aaaaaaaa" ;
    const char * b = "faaaaaaaaaaaaaa";
    const char *  c = "sa";
    eprintf(a,b,c);
    
    
    return 0;
    }