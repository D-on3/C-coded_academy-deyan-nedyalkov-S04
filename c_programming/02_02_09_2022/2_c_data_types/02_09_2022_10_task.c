/* 10. Представете си, че имате фирма за отдаване на каравани и кемпери 
под наем, за която трябва да разработите софтуер. Вие сте малка фирма и 
имате общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. 
на ден. Декларирайте променливи за броя на караваните, цената на караваните, 
броя на кемперите и цената им. Направете меню, което пита клиента каравана или 
кемпер ще иска. Направете променлива, в която да се събират парите, които клиента
 дължи на компанията. Принтирайте резултата */
#include<stdio.h>


void greet(){
printf("Hello what type of vehicle would you like to rent: \n");
printf("For Trailer press [1] key: \n");
printf("For Camper press [2] key: \n");


}

void quantity(short int iNumOfTrailers,short int iNumOfCampers){
printf("Trailers left %hd\n",iNumOfTrailers);
printf("Campers left %hd\n",iNumOfCampers);
}

int validateChoice(short int iChoiceOfVehicle){


//Validate for proper USR input
while (iChoiceOfVehicle < 1 ||iChoiceOfVehicle >2 ){
    scanf("%hd",&iChoiceOfVehicle);
    
    if (iChoiceOfVehicle < 0 ){
            printf("Invalid input please try again: \n");
    }
    else if(iChoiceOfVehicle >2){
            printf("Invalid input please try again: \n");   
    }
}
return iChoiceOfVehicle;
}


int main(){

short int iNumOfTrailers = 3;
short int iNumOfCampers = 3; 

short int iChoiceOfVehicle=5; //Used for validation of the type of vehicle

short int iPriceTrailer = 90;
short int iPriceCamper = 100;
short int iTotalPrice = 0;

greet();

iChoiceOfVehicle=validateChoice(iChoiceOfVehicle);

if(iChoiceOfVehicle == 1){
 iNumOfTrailers -= 1;
 iTotalPrice += iPriceTrailer;
}
else if(iChoiceOfVehicle ==2){
iNumOfCampers -= 1;
iTotalPrice += iPriceCamper;
}


//To be used for quantity representation
//quantity(iNumOfTrailers,iNumOfCampers);
printf("Your final bill is: %hd\n",iTotalPrice);

return 0;
}