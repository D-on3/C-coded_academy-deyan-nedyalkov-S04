#include<stdio.h>

/*Задача 9: Условен оператор (?:)
а) въведете стойност за nA с scanf
b) използвайте условния оператор за намиране на максималното от две числаа*/
int main()
{
 int nA = 1;
int nB;
int nB = 0;
scanf("%d",&nB);



nB = (nA == 1) ? 2 : 0; /* сравнява число */
printf("A value is %d\n", nA);
printf("B value is %d\n", nB);

return 0;
}