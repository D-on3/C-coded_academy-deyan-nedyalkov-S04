/*Задача 6. Напишете функцията int linear_search(const int a[], int n, int key); използвайки адресна аритметика без инкрементиращи променливи.
*/
#include <stdio.h>


void linear_search(const int a[], int n, int key);



int main(){

    int arr[]={3,5,6,7,8,9};
    linear_search(arr,4,4);




}

/*int *pStart = a;
    int *pEnd = a + n - 1;
    int idx = n;*/

void linear_search(const int a[], int n, int key){
int *p = &a;
int *pLastAdr = p + n-1;
int index = n;
while(pLastAdr>=p){
    index --;
    if(*p == key){
        printf("True");
    }
    


}


}