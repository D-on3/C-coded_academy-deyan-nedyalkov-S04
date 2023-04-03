/*
* 7 Напишете програма на C, за да създадете калкулатор, който изпълнява основни
*аритметични операции (събиране, изваждане, умножение и деление). Калкулаторът трябва
*да въведе две числа и оператор от потребителя. Той трябва да извършва операция според
*въведения оператор и трябва да приема вход в даден формат.
*<номер 1> <оператор> <номер 2>
*/

//in case of using char as ascii symbols aways use single quotes

#include<stdio.h>

int main(){

    float fCalc1=0 ,fCalc2=0 ,fSum=0;
    char cChar=0;
    scanf("%f %c %f",&fCalc1,&cChar,&fCalc2);

    switch (cChar)
    {
        case '*':
            printf("%.1f\n" ,fCalc1 * fCalc2);
            break;
        case '/':
            printf("%.1f\n",fCalc1 / fCalc2);
            break;
        case '+':
            printf("%.1f\n",fCalc1 + fCalc2);
            break;
        case '-':
            printf("%.1f\n",fCalc1 - fCalc2);
            break;
        default:
            printf("Unknown operator");
            break;
    }


    return 0;
}