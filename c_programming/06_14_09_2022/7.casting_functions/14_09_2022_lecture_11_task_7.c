/*Задача 7. Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под мейн функцията.*/
#include <stdio.h>


double AreaRightTriangle(float a , float b );
double AreaRectangle(float a , float b );

int main(){

    float a,b;
    printf("Enter value for a \n");
    scanf("%f",&a);
    printf("Enter value for a \n");
    scanf("%f",&b);
    double calForRectanglea;
    double calForRectangleb;
    calForRectanglea,calForRectangleb =AreaRightTriangle(a,b);
    AreaRectangle(calForRectanglea,calForRectangleb);
    return 0;
}

double AreaRightTriangle(float a , float b ){
double iSum;
iSum = 0.5*(a*b);
printf("Area of Right Triangle : %lf ",&iSum);
return  a ,b ;
}

double AreaRectangle(float a , float b ){
double iSum = 0;
iSum = a*b;
printf("Area of Rectangle  : %lf",iSum);

}