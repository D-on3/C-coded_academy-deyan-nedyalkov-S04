/*8. Напишете програма, която да отделя в два отделни масива
четните и нечетните числа от даден масив с цели числа. Масива
да бъде въведен от клавиатурата. Принтирайте оригиналния и
двата резултатни масива.*/
#include <stdio.h>

int main(){

int arr[8] ={};
int arrOdd[7] ={};
int arrEven[7]= {};
int indexOdd = 0;
int indexEven = 0;
for(int i = 0;i<8;){
    scanf("%d",&arr[i]);
    i++;
}

//sorting even odd
for(int j =0;j<8;){

    if(arr[j] % 2 == 0){
        arrEven[indexEven] =arr[j];
        indexEven ++;
    }
    else{
        arrOdd[indexOdd] = arr[j];
        indexOdd ++; 

    }
    j++;

}

printf("Original array : \n");//for representing the original array 
// for determening the size of array a and b 
int sizeOfArrayOdd = sizeof(arrOdd)/sizeof(int); 
int sizeOfArrayEven = sizeof(arrEven)/sizeof(int); 

int i = 0;
for(i = 0;i<8;i++){
    printf("%d , ",arr[i]);
}
printf("\n");
printf("Odd array : \n");//for representing the odd array
for(i = 0;i<sizeOfArrayOdd;i++){
        if(arrOdd[i] != 0){
    printf("%d , ",arrOdd[i]);
        }
}
printf("\n");
printf("Even array : \n");//for representing the even array
for(i = 0;i<sizeOfArrayEven;i++){
    if(arrEven[i] != 0){
    printf("%d , ",arrEven[i]);
    }
}
printf("\n");
return 0;
}