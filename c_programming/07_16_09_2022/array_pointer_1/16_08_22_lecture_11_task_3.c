/*3. Напишете програма, която запълва масив от 20 елемента с
произволно избрани стойности. За целта използвайте функцията
rand(). Намерете най-голямото число в масива. Принтирайте
намереното число и масива.*/

#include <stdio.h>
#include<time.h>
#include <stdlib.h>



int main(){


int arr[20] = {};

    for(int i=0;i<20;i++)
    {   arr[i]= (rand() % 120) +1;
        //printf("%d \n",array[i]);
    }



int max = arr[0];

for(int i = 0 ;i<20;i++){

if(max < arr[i]){
   max = arr[i];
}


}
printf("The biggest element from the array : %d",max);
   return 0;
}