/*Задача 4. Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете функция,
която валидира датата.*/
#include <stdio.h>

typedef enum enm {January, February, March, April, May, June, July, August, September, October, November ,December}month;
typedef struct Date{
    unsigned int day:5; // days are 31 so 5(max 31) bits are suffitient = 11111 = 16+8+4+2+1
    month current:4; // months are 12 so 4(max 15) bits are suffitient = 1111= 8+4+2+1
    int year:13; // 13 bits are enought to store the number 9999
}date;


int validate_date(date *dDate){
    int validate= 0;
    if(dDate->year >= 1970 && dDate->year < 3000 ){
        if(dDate->current > 0 && dDate->current <= 12 ){
            
            if(dDate->day > 0){
                
                if( dDate->day < 29 && dDate->current == 2){
                    printf("\tDate is valid\t");
                    validate +=1;
                }
                else if( (dDate->day <= 30) && (dDate->current == 4||dDate->current ==6||dDate->current ==4||dDate->current ==9||dDate->current ==11)){
                    printf("\tDate is valid\t");
                    validate +=1;
                }
                else if((dDate->current <= 31) && (dDate->current == 1||dDate->current == 3||dDate->current == 5||dDate->current == 7|| dDate->current == 8||dDate->current == 10||dDate->current == 12)){
                    printf("\tDate is valid\t");
                    validate +=1;
                    }
                else{ printf("\tInvalid date\t");} 
                }
            else{printf("\tInvalid date\t");}
    }
    
    }
    else{printf("\tInvalid date\t");}
    
    return validate;
}

void represent_Enum(date *dDate){


    switch(dDate->current){
        case 1: printf(" January ");break ;
        case 2: printf(" February ");break ;
        case 3: printf(" March ");break ;
        case 4: printf(" April ");break ;
        case 5: printf(" May ");break ;
        case 6: printf(" June ");break ;
        case 7: printf(" July ");break ;
        case 8: printf(" August ");break ;
        case 9: printf(" October ");break ;
        case 10: printf(" October ");break ;
        case 11: printf(" November ");break ;
        case 12: printf(" December ");break ; 
        default:
            printf("Something went wrong represent_Enum func: \n");
    }


}

void print_date(date *dDate){
    printf(" %u ",dDate->day);
    represent_Enum(dDate);
    printf("%u ",dDate->year);

}

int main(){

    // Valid case 
    int flag = 0;
    date first = {21,12,2012}; 
    flag = validate_date(&first);
    if(flag){
        flag = 0;
        print_date(&first);
    }
    printf("\n");

    // Invalid case : 1 31 days for April 
    date case_1 = {31,4,2012}; 
    flag = validate_date(&case_1);
    if(flag){
        flag = 0;
        print_date(&case_1);
    }

    printf("\n");
    // Invalid case : 2 
    date case_2 = {30,2,2012}; 
    flag = validate_date(&case_2);
    if(flag){
        flag = 0;
        print_date(&case_2);
    }

    printf("\n");
    // Invalid case : 3 
    date case_3 = {29,12,3400}; 
    flag = validate_date(&case_3);
    if(flag){
        flag = 0;
        print_date(&case_3);
    }

    printf("\n");



return 0 ;
}