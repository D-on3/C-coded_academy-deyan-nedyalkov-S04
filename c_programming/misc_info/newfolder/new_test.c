#include<stdio.h>
#include<stdlib.h>


int *AllocateElement(int* ptr,int count){

return realloc(ptr,sizeof(int)*count);


}


int main(){
int init_size;
scanf("%d",&init_size);
int* ptr_arr_int  = (int *) calloc(init_size,sizeof(int));


for(int i = 0 ;i<init_size;i++){
    int  temp2 = 0;
    printf("ENTER ELEMENT\t");
    scanf("%d",&temp2);
    
    ptr_arr_int[i] = temp2;
}


for(int i = 0 ;i<init_size;i++){
printf("%d\n",ptr_arr_int[i]);
}



reallocArrPluson3(ptr_arr_int,init_size+1);
init_size++;

for(int i = 0 ;i<init_size;i++){
    int  temp2 = 0;
    printf("ENTER ELEMENT\t");
    scanf("%d",&temp2);
    
    ptr_arr_int[init_size-1]=temp2;
printf("%d\n",ptr_arr_int[i]);

}



    return 0;
}