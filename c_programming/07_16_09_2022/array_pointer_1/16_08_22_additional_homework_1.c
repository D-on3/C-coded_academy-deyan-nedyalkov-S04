#include<stdio.h>



void sort(int* arr[],int size){
    
    for(int i  = 0;i<size-1;i++){
        for(int j = i+1;j <size;j++){
            if(*arr[i] < *arr[j]){
                int* temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;}

        }
    }
    

}

int main(){
    int a1 =1 ,a2= 2,a3=3,a4=4, a5= 5,a6=6 ,a7=7;

    int* p1 = &a1;
    int* p2 = &a2;
    int* p3 = &a3;
    int* p4 = &a4;
    int* p5 = &a5;
    int* p6 = &a6;
    int* p7 = &a7;

    int* arr[]={p1,p2,p3,p4,p5,p6,p7};
    sort(arr,7);

printf("%d %d %d %d %d %d ", a1,a2,a3,a4,a5,a6);

printf("\n");


    for(int i=0;i < 7;i++){
        printf("%d ",*arr[i]);
    }
}

