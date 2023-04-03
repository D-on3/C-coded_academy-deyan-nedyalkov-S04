#include <stdio.h>
#define size 4
/*3.Напишете програма, която разменя елементите на два еднакви 
по размер масива, използвайки указатели.*/

void print_array(int elements,int arr[elements]);
void swap_elements(int elements,int arr[elements],int arr2[elements]);
void swap_el(int elements,int* arr1,int* arr2);


int main(){


int arr1[size]={2,2,2,2};
int arr2[size]={1,1,1,1};

int* pointerArray= NULL;
int* pointerArray2=NULL;
pointerArray=arr1;
pointerArray2=arr2;
printf("Before the swap: Array 1 = ");
print_array(size,arr1);
printf("Before the swap: Array 2 = ");
print_array(size,arr2);
swap_el(size, &pointerArray, &pointerArray2);
printf("Before the swap: Array 1 = ");
print_array(size,arr1);
printf("Before the swap: Array 2 = ");
print_array(size,arr2);

    return 0;
}

void print_array(int elements,int arr[elements]){

    for(int i = 0;i<elements;i++){
        printf(" %d ",arr[i]);
    }
    printf("\n");
}

//Without pointer with index
void swap_elements(int elements,int arr[elements],int arr2[elements]){
    int temp  = 0;
    
    for(int i = 0;i<elements;i++){
        int temp= arr[i];
        arr[i] = arr2[i];
        arr2[i] = temp;
    }

}

//With pointer 
void swap_el(int elements,int* arr1,int* arr2){

    for(int i= 0;i<elements;i++){
        int temp= *arr1;
        *arr1 = *arr2;
        *arr2 = temp;
        arr1++;
        arr2++;
    }
} 