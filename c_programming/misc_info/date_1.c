#include<stdio.h>
#include<time.h>




int main(){
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);
    printf("%d/%d/%d", ptr->tm_mday,ptr->tm_mon,(ptr->tm_year+1900));
    printf("\n");
    return 0;
}