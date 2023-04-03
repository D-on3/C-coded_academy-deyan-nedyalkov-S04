/*Задача 1.Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата.*/

#include <stdio.h>

const float pi=3.14;

void calcAreaCircle(void);

int main(){
    
    calcAreaCircle();
    return 0;
}

void calcAreaCircle(void){
    float radius=0;
    printf("Enter radius: ");
    scanf("%f",&radius);
    float iSum;
    iSum = pi*(radius*radius);
    printf("%f",iSum);
}