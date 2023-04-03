#include <stdio.h>
/*Задача 16. Да се дефинира константата Пи (3.14159...) и да се напише функция,
 * която изчислява лицето на окръжност по
 * даден радиус (Пи * R * R). В main() да се извика горната функция с радиуси 1, 1.5, 13.*/

int CalcAreaOfCircle(float radius){
    const float fPi= 3.14159;
    double result = fPi *radius*radius;
    printf("%lf\n",result);


}

int calcAreaOfElipse(float a,float b){

}

int main(){
    CalcAreaOfCircle(1);
    CalcAreaOfCircle(1.5);
    CalcAreaOfCircle(13);



    return 0;
}