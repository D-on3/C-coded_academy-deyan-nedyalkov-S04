/*Задача 1. Напишете програма, в която информацията да бъде съхранявана в структура, описваща автомобил. Входната информация трябва бъде въведена от потребителя, като напишете меню с въпроси към него. 
Принтирайте въведената информация за описание на автомобила.*/

#include <stdio.h>
 
 
 
 
 
struct Car{
    char brand[10];
    char model[10];
    char color[10];
    int year;
    float CC;
};
 
typedef struct Car type;
 
 
void print(type* car){
 
printf("Car brand %s model %s color %s year %d engine volume %f",car->brand,car->model,car->color,car->year,car->CC);
 
}
 
int main(){
    type object = {};
 
    printf("Car brand\n");
    scanf("%s",object.brand);
    printf("Car model\n");
    scanf("%s",object.model);
    printf("Car color\n");
    scanf("%s",object.color);
    printf("Car year of production:\n");
    scanf("%d",&object.year);
    printf("Car brand\n");
    scanf("%f",&object.CC);
 

 
    return 0;
}