/* 11.  Създайте С програма, която калкулира стойността на
покупки в магазин за хранителни стоки. 
Клиентът може да закупи различна комбинация от продукти. 
В магазина има следните налични продукти и цени:
Домати- 4.5 лв.за килограм, Брашно 1.80 лв. за килограм,
Кисело мляко - 0.50 лв. за брой, Сладолед на фунийки 0.60 лв. броя
Бонбони 1.50 лв. за килограм, Близалки 0.15 лв. за брой */
#include<stdio.h>


int addTomato(){
float fTotalSum=0;
printf("How many kilograms of Tomatos would you like to purchase?: \n");
float fTomato= 0;
scanf("%f", &fTomato);
float fTomatoPrice=450;
fTotalSum = fTomato * fTomatoPrice;
return fTotalSum;


}

int addFlour(){
float fTotalSum=0;
printf("How many kilograms of Flour would you like to purchase?: \n");
float fFlour= 0 ;
scanf("%f",&fFlour);
float fFlourPrice=180;
fTotalSum= fFlour * fFlourPrice;
return fTotalSum;
}

int addSourMilk(){
float fTotalSum=0;
printf("How many pieces of Sour Milk do you want to purchase?:  \n");
float  fSourMilk= 0  ;
scanf("%f", &fSourMilk);
float fSourMilkPrice=50;
fTotalSum = fSourMilk * fSourMilkPrice; 
return fTotalSum;
}

int addIceCream(){
float fTotalSum=0;
printf("How many cones of Ice Cream do you want to purchase?:  \n");
float fIceCream= 0 ;
scanf("%f", &fIceCream);
float fIceCreamPrice=60;
fTotalSum = fIceCream * fIceCreamPrice;
return fTotalSum;
}

int addCandy(){
float fTotalSum=0;
printf("How many pieces of Candy do you want to purchase?:  \n");
float fCandy = 0 ;
scanf("%f", &fCandy);
float fCandyPrice=150;
fTotalSum = fCandy * fCandyPrice; 
return fTotalSum;
}

int addLollyPops(){
float fTotalSum=0;
printf("How many pieces of Lolly Pops do you want to purchase?:  \n");
float fLollyPops ;
scanf("%f", &fLollyPops);
float  fLollyPopsPrice = 15;
fTotalSum= fLollyPops * fLollyPopsPrice;
return fTotalSum ;
} 

int main(){
float fFinalPrice = 0;
float fToBeCalc = 0; //Used for the functions returns

fToBeCalc = addTomato();
fFinalPrice +=fToBeCalc;
fToBeCalc = 0;

fToBeCalc = addFlour();
fFinalPrice +=fToBeCalc;
fToBeCalc = 0;

fToBeCalc = addSourMilk();
fFinalPrice +=fToBeCalc;
fToBeCalc = 0;

fToBeCalc = addIceCream();
fFinalPrice +=fToBeCalc;
fToBeCalc = 0;

fToBeCalc = addCandy();
fFinalPrice += fToBeCalc;
fToBeCalc = 0;

fToBeCalc = addLollyPops();
fFinalPrice += fToBeCalc;
fToBeCalc = 0;

// Final conversion from stotinki to leva
fFinalPrice /= 100; 
printf("Total sum of your puchases is : %0.2f lv.\n",fFinalPrice);
return 0;
}