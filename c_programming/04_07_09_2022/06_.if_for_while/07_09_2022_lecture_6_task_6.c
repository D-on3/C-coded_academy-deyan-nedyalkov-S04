// 6. Напишете програма на C за въвеждане на номер на седмицата (1-7) и отпечатване на
// името на деня от седмицата с помощта на главни букви
#include <stdio.h>


int main(){

    char cDay=0;
    scanf("%hhd",&cDay);
    switch (cDay){

        case 1 :
            printf("Monday\n");
            break;

        case 2 :
            printf("Tuesday\n");
            break;

        case 3 :
            printf("Wednesday\n");
            break;

        case 4 :
            printf("Thursday\n");
            break;

        case 5 :
            printf("Friday\n");
            break;

        case 6 :
            printf("Saturday\n");
            break;

        case 7 :
            printf("Sunday\n");
            break;

        default:
            printf("Other\n");
            break;

    }
    return 0;




}