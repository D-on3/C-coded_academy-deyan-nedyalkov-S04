/*9. Напишете програма, която да завърти даден масив от цели
числа с N позиции наляво. Масива и числото N трябва да бъдат
въведени от клавиатурата. Принтирайте оригиналния и
резултатния масиви. Пример:*/
#include<stdio.h>

int main(){

int arr[10]={};
int tempArr[10]={};
int iNum;

for(int i  = 0; i<10;i++){
    scanf("%d", &arr[i]);
}

printf("Enter value for N: \n");
scanf("%d",&iNum);

int sizeOFArr = sizeof(arr)/sizeof(int);
int forPosition = 10 - iNum;
int  counter= 0;
int i = 0;
i = iNum-1;
for(;;){

    
    if(counter<=(10-iNum)){

    tempArr[counter] =arr[i+1]  ;
        i++;
    counter ++;
    }

    if(counter == forPosition){
        i =0;
    }
    
    if(counter>=forPosition ){
    
        tempArr[counter] = arr[i] ;

        counter ++;
                i++;
        
        if( counter == 10 ){break;}
    }


     
}
printf("Original array \n");
for(int j=0;j<10;){
    printf("%d ", arr[j]);
    j++;
}
printf("\n");
for(int j=0;j<10;){
printf("%d ", tempArr[j]);
j++;
}

    return 0;
}