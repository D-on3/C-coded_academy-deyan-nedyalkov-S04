//Упражнение 13. Напишете програма, която изчислява броя на секундите в една година.
#include<stdio.h>


int main(){


 int iYearDays = 365;
 int iHours = 24;
 int iMinutes = 60;
 int iSeconds = 60;


 long unsigned int iTotalSumOfSeconds = (iYearDays * iHours) * iMinutes * iSeconds;

 printf("%lu",iTotalSumOfSeconds);
}