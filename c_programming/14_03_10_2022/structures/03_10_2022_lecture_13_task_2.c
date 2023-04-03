/*Задача 2. Напишете програма, която събира две дистанции,
които са изразени в километри, метри, сантиметри. Дистанциите трябва да бъдат 
въведени от потребителя. Принтирайте изходните и резултатната дистанция.
*/
#include <stdio.h>

typedef struct Distance{
    int km;
    int meter;
    int cm;

}Distance; // In order to be used as a type at later stage.

typedef struct Distance dest;

Distance calcDifference(Distance a , Distance b){
    Distance difference;
    difference.km = 0;
    difference.meter = 0;
    difference.cm = 0;
    difference.km = a.km - b.km;
    difference.meter = a.meter -b.meter;
    difference.cm = a.cm - b.cm;


    while(difference.cm > 100){
        difference.meter++;
        difference.cm -= 100;
}

    while(difference.meter > 100){
        difference.km++;
        difference.meter -= 100;

}
    return  difference;
    

}

dest printResult(dest desti){
    printf("Km: %d Meter: %d Cm: %d ",desti.km,desti.meter,desti.cm);
    }

Distance initStruct(void){
    dest distance;
    distance.km= 0;
    distance.meter= 0;
    distance.cm= 0;
    printf("Enter value for km: \n");
    scanf("%d",&distance.km);
    printf("Enter value for meter: \n");
    scanf("%d",&distance.meter);
    printf("Enter value for cm: \n");
    scanf("%d",&distance.cm);
    return distance;
}

int main(){
    dest first = initStruct();
    dest second = initStruct();
    dest diff = calcDifference(first,second);


    printResult(diff);

    return 0;

}