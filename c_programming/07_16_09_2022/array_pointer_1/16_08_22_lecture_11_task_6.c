/*6. Напишете програма, която да брои колко пъти се среща едно
число в даден масив от цели числа. Масива трябва да бъде
въведен от клавиатурата. Принтирайте резултатите.*/
#include<stdio.h>


int main(){

int arr[10]={};
for(int i=0;i<10 ;){
    scanf("%d", &arr[i]);
    i++;
}
    int counter = 0;
// check if there are matching elements in the array 
for(int j=0;j<10;j++){
    
     // counter is set to 1  because its at least once found
    for(int k=10;k>0;k--){
        if(arr[j] == arr[k]){
            counter ++;

                     
        }
             
    }
    if(counter < 1){
        counter = 1;

    if( counter >= 0 ){
        printf("Element: [%d] Is found [%d] times \n",arr[j],counter);
}      
}
   counter = 0;
    
}
return 0;
}