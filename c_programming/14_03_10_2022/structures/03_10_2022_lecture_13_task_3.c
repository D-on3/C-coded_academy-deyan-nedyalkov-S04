/*Задача 3. Напишете програма, която калкулира разликата на два времеви периода,
 изразени във векове, години, месеци, дни, минути, секудни.
 Принтирайте изходните периоди и резултата.
*/
#include <stdio.h>


typedef struct Period{
    int century;
    int year;
    int month;
    int days;
    int minutes;
    int seconds;

}Period;// to be used as type in later functions 


typedef struct Period per;

Period initPeriod(void){
    per Period = {};

    printf("Enter value for century \n");
    scanf("%d",&Period.century) ;

    printf("Enter value for year \n");
    scanf("%d",&Period.year) ;

    printf("Enter value for month \n");
    scanf("%d",&Period.month) ;

    printf("Enter value for days: \n");
    scanf("%d",&Period.days) ;

    printf("Enter value for minutes: \n");
    scanf("%d",&Period.minutes);

    printf("Enter value for seconds: \n");
    scanf("%d",&Period.seconds) ;
    return Period;
}


Period calcDiffrence(per first , per second){
    per Period={};
    Period.century = 0;
    Period.year = 0;
    Period.month = 0;
    Period.days  = 0;
    Period.minutes = 0;
    Period.seconds = 0;
    Period.century = first.century -second.century;
    Period.year = first.year - second.year ;
    Period.year = first.month - second.month ;    
    Period.year = first.days - second.days ;
    Period.year = first.minutes - second.minutes ;    
    Period.year = first.seconds - second.seconds ;



while(Period.seconds >= 60){
    Period.minutes += 1;
    Period.seconds -= 60;
}
while(Period.minutes >= 1440 ){
    Period.days += 1;
    Period.minutes -= 1440;
}
while(Period.days >= 30){
    Period.days += 1;
    Period.minutes -= 1440;
}
while(Period.month >= 12){
    Period.year += 1;
    Period.minutes -= 12;
}

while(Period.year >=100){
        Period.century += 1;
        Period.year -= 100;
    }




    
    return  Period;


}

void printResult(per *object){

printf("Diffrence: \nIn centuries : %d\n In years :  %d\n In months: %d\n In days:  %d\n In minutes:  %d\n In seconds:  %d",object->century,object->year,object->month,object->days,object->minutes,object->seconds);
}

int main(){

    per first= {};
    per second= {};
    per diff = {};

    first = initPeriod();
    second = initPeriod();
    diff = calcDiffrence(first,second);
    printResult(&diff);




    return 0;

}