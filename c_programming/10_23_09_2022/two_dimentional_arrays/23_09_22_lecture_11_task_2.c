/*Задача 2. Напишете програма, която събира две матрици (4х4) и записва резултата в трета такава със същия размер. 
Събирането на матриците става като намерим сумата на съответстващите елементи в тях. Данните за изходните матрици трябва да бъдат въведени от потребителя.
 Разпечатайте трите матрици в конзолата.
*/

#include <stdio.h>
int  addToArrResult(int arr[4][4],int arr2[4][4],int arrResult[4][4],int row, int col);
void inputArray();
void printResult();

int main(){

    int arr[4][4]={
        {3,4,5,6},
        {7,8,9,10},
        {11,12,13,14},
        {15,16,17,18}
    };

    int arr2[4][4]={
        {3,4,5,6},
        {7,8,9,10},
        {11,12,13,14},
        {15,16,17,18}
    };
    int arrResult[4][4]={};
    addToArrResult(arr,arr2,arrResult,4,4);

return 0;
}


int addToArrResult(int arr[4][4],int arr2[4][4],int arrResult[4][4],int row, int col){
    int temp = 0 ;
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            arrResult[i][j] = arr[i][j] + arr[i][j];
            
            printf("%d\n",arrResult[i][j]);
        }
    }

}