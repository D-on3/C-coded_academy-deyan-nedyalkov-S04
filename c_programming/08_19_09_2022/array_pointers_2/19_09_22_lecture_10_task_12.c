#include<stdio.h>
/*напишете програма, която копира един масив в друг, използвайки указатели*/


int main(){
    int arr[5]={1,2,3,4,5};
    int arr2[5];

    int* p = arr;
    int* p2= arr2;

    for(int i =0;i<5;i++){
     *p2 = *p;
     p++;
     p2++;   
    }
    

for( int i = 0;i<5;i++){
    printf("%d ",arr2[i]);
}
printf("\n");

}
