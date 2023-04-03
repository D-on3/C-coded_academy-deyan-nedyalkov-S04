/*5. Напишете програма, която принтира уникалните елементи от
масив с цели числа, въведени от клавиатурата. За целта, някои
от числата трябва да се повтарят.*/
#include<stdio.h>


int main(){

int arr[6]={1,1,1,4,5,6};

//for(int i=0;i<6 ;i++){
//    scanf("%d", &arr[i]);
//}

int currentElement=0;

for(int i = 0;i<6 ;i++){
    int counter= 0;
    currentElement = arr[i];
for(int j =6 ;j>0;j--){
    if(currentElement==arr[j]){
        counter ++;
    }
    }
if(counter == 1 ){

        printf("Element %d is unique.\n",currentElement);
    
}

}
return 0;
}