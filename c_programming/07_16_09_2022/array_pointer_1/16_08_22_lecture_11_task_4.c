/*4. Напишете програма, която приема 10 цели числа от
клавиатурата, запазва ги в масив и ги принтира в обратен ред.*/


#include <stdio.h>


int main(){


int arr[10]={};

for(int i=0;i<10 ;i++){
    scanf("%d", &arr[i]);
}
printf("Array in reversed order: \n");
for(int j =9;j>=0;j--){
    printf("%d ", arr[j]);
}

return 0;
}