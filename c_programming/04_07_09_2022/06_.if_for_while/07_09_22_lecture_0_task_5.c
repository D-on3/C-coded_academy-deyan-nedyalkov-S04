/*5. Да се намери сумата от тези елементи на редица, които са удвоени нечетни числа, ако:
а/редицата е с 41 елемента;
б/първо се въвежда броят на елементите на редицата;
в/редицата е последен елемент 0;
г/редицата е с елементи, чиято сума е по-голяма от 999.*/
#include<stdio.h>

int main(){

int iNumberOfElements=0;

printf("B).ENTER NUMBER OF ELEMENTS:  ");
scanf("%d",&iNumberOfElements);
int iSumA=1;
int iSumV=1;
int iSumG=1;
int iSumB=1;
// for a
for(int i=0;i<=42;i++){
printf("%d ",iSumA);
iSumA +=2;
iSumA *= 2;


}
// for b
for(int j= 0;j < iNumberOfElements;j++){
printf("%d ",iSumB);
iSumB +=2;
iSumB *= 2;

}
// for c=v 
for(int k;;k++ )
if(iSumV== 0){
    break;
}
printf("%d ",iSumV);
iSumV +=2;
iSumV *= 2;


for(int l;;l++){

if(iSumG== 990){
    break;
}
printf("%d ",iSumB);
iSumG +=2;
iSumG *= 2;



}
return 0;
}