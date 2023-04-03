/*7. Напишете програма, която да намери максималния и
минималния елемент в масив от цели числа. Масива трябва да
бъде въведен от клавиатурата. Принтирайте целия масив и
резултатите.*/
#include<stdio.h>


int main(){

int arr[10]={};


for(int i = 0 ;i<10;i++){
    scanf("%d",&arr[i]);
}


int min=arr[0];
for(int i =0 ; i<10;i++){
    if(arr[i]<min){
        min = arr[i];
    }
}

printf("Smallest element in the array = %d",min);
}