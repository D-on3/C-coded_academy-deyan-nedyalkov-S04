/* 10. Представете си, че имате фирма за отдаване на каравани и кемпери
под наем, за която трябва да разработите софтуер. Вие сте малка фирма и
имате общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв.
на ден. Декларирайте променливи за броя на караваните, цената на караваните,
броя на кемперите и цената им. Направете меню, което пита клиента каравана или
кемпер ще иска. Направете променлива, в която да се събират парите, които клиента
дължи на компанията. Принтирайте резултата
Задача 18 Довършете задачата за кемперите от миналия път като добавите променлива,
в която да се събират парите, които клиента дължи на компанията. Принтирайте резултата.
Питайте клиента дали иска още налични продукти.
*/
#include<stdio.h>

extern short int iNumOfTrailers;
short int iNumOfTrailers = 3;
extern short int iNumOfCampers;
short int iNumOfCampers = 3;
extern short int iChoiceOfVehicle;
short int iChoiceOfVehicle =5 ; //Used for validation of the type of vehicle
extern int iPriceTrailer;
int iPriceTrailer=90;
extern int iPriceCamper;
int iPriceCamper= 100;
extern short int iTotalPrice ;
short int iTotalPrice = 0;


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

void addingLogic(int choice){

    if(iChoiceOfVehicle == 1){
        if (iNumOfTrailers > 0){
            iNumOfTrailers -= 1;
            iTotalPrice += iPriceTrailer;
        }
        else {
            printf("We dont have any Trailers left\n");
        }
    }
    else if(iChoiceOfVehicle ==2){
        if(iNumOfCampers > 0){
        iNumOfCampers -= 1;
        iTotalPrice += iPriceCamper;
        }
        else {
            printf("We dont have any Trailers left\n");
        }
    }
}

int question(){
    printf("Do you want to rent another vehicles?/yes/No\n");
    printf("Press [1] for Yes [2] for No:\n");
    int answer=0;
    scanf("%d",&answer);
    return answer;
}

int main(){


    greet();
    iChoiceOfVehicle=validateChoice(iChoiceOfVehicle);
    addingLogic(iChoiceOfVehicle);
    int answer;
    answer=question();

    while(answer != 2){
    if(answer==1){
        greet();
        iChoiceOfVehicle = 5;
        iChoiceOfVehicle=validateChoice(iChoiceOfVehicle);
        addingLogic(iChoiceOfVehicle);
    }
    if(iNumOfTrailers == 0 && iNumOfCampers == 0){
            printf("We dont have eny vehicles available for renting at this moment\n");
            break;
        }
    answer=question();
    }

        quantity(iNumOfTrailers,iNumOfCampers);
        printf("Your final bill is: %hd\n",iTotalPrice);
    return 0;

}