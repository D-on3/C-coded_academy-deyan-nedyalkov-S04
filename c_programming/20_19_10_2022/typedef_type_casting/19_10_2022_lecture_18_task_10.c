/*Задача 10. Създайте структура диня с два елемента - диаметър и дебелина
на кората заделете динамично с malloc() за масив от А на брой дини от сорт
мелон и попълнете данните за диаметър между 15 и 140 см с функцията
rand(), за всяка една диня в масива и дебелина на кората между 0.5 и 3.5
см. Създайте структура диня с два елемента - диаметър и дебелина на
кората заделете динамично с malloc() за масив от В на брой дини от сорт
пъмпкин и попълнете данните за диаметър между 35 и 95 см с функцията
rand(), за всяка една диня в масива и дебелина на кората между 0.3 и 0.9
см. Намерете средната големина на динята и средната дебелина на кората
и ги съпоставете с тези от втория масив. Изведете на екрана купчината от
кой сорт е по добре да се купи.
Изход: По-добре е да се купят ... дини с диаметър ... сантиметра и кора с
дебелина D см вместо ... дини с диаметър ... см и дебелина на кората D1 см.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct Watermelon{
    int diameter;
    int width_of_outter_surfice;
};

typedef struct Watermelon melon;

melon* initMellon(int number_of_el){
  return malloc(number_of_el*sizeof(melon));  
}



int main(){


int elements;
scanf("%d",&elements);
melon* ptr_sort_melon= initMellon(elements);
if(ptr_sort_melon==NULL){
    return 1;
}

for(int i = 0 ;i<elements;){
    int num = rand() % 150 + 1; // use rand() function to get the random number  
    if(num >= 15){
    ptr_sort_melon->diameter = num;
    ptr_sort_melon++;
    i++;
    }

}

ptr_sort_melon -= elements;

for(int i = 0 ;i<elements;){
    double num = rand() % 35 + 1; // use rand() function to get the random number  
    num /= 10;
    if(num >= 0.5){
    ptr_sort_melon->width_of_outter_surfice = num;
    ptr_sort_melon++;
    i++;
    }
    

}
int elements_pumpkin = 0;
scanf("%d",&elements_pumpkin);
melon* ptr_sort_pumpkin = initMellon(elements);

if(ptr_sort_pumpkin==NULL){
    return 1;
}

for(int i = 0 ;i<elements_pumpkin;){
    int num = rand() % 95 + 1; // use rand() function to get the random number  
    if(num >= 35){
    printf("%d ",num);
    ptr_sort_pumpkin->diameter = num;
    ptr_sort_pumpkin++;
    i++;
    }

}

ptr_sort_pumpkin -= elements_pumpkin;

for(int i = 0 ;i<elements;){
    double num = rand() % 9 + 1; // use rand() function to get the random number  
    num /= 10;
    if(num >= 0.3){
    printf("%lf ",num);
    ptr_sort_pumpkin->width_of_outter_surfice = num;
    ptr_sort_pumpkin++;
    i++;
    }
    

}

/*Намерете средната големина на динята и 
  средната дебелина на кората и ги съпоставете с тези от втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход: По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D см вместо ... дини с диаметър ... см и дебелина на кората D1 см.
*/
int temp_avarage_width_a =0;
double temp_avarage_outter_a= 0;
int temp_avarage_width_b =0;
double temp_avarage_outter_b = 0;


for(int i = 0;i<elements;i++){
    temp_avarage_width_a += ptr_sort_melon->diameter;
    temp_avarage_outter_a += ptr_sort_melon->width_of_outter_surfice;
    ptr_sort_melon ++;
} 

for(int i = 0;i<elements_pumpkin;i++)
{
    temp_avarage_width_b += ptr_sort_pumpkin->diameter;
    temp_avarage_outter_b += ptr_sort_pumpkin->width_of_outter_surfice;
    ptr_sort_pumpkin ++;

}

int finalcalcA_width = temp_avarage_width_a / elements;
int  finalcalcB_width = temp_avarage_width_b / elements_pumpkin;
double finalcalcA_outter = temp_avarage_outter_a / elements;
double finalcalcB_outter = temp_avarage_outter_b / elements_pumpkin;


if(finalcalcA_width > finalcalcB_outter && finalcalcA_outter > finalcalcB_outter){
    printf("Its better to by from A type width:  %d  outter_shelll: %lf \n not from B type width:  %d  outter_shelll: %lf \n",finalcalcA_width,finalcalcA_outter,finalcalcB_width,finalcalcB_outter);
}


else{
    printf("Its better to by from B type width:  %d  outter_shelll: %lf \n not from A type width:  %d  outter_shelll: %lf \n",finalcalcB_width,finalcalcB_outter,finalcalcA_width,finalcalcA_outter);
}
ptr_sort_melon -= elements;
ptr_sort_pumpkin -= elements_pumpkin;


return 0 ;
}