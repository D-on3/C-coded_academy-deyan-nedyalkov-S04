// // type of memmory 
// // ram 
// // rom 
// // cpu reg + cache

// // outer
// // =hd
// // optic disc
// // -magnet disk
// // -magnet lenti
// // -ssd
// // -ssd
// // -usb
// // virtual 

// // defragment  - when we use malloc calloc -we are fragmenting the memmory
// // page-vane
// // heap-

// // functions for
// // zadelqne -> pamet
// // rabota s -> pamet

// // vinagi kogato zadelqme pamet trqbwa da si q osvobodim 
// // ako ne go napravim se poluchava memmory leak 



// // malloc 
// // realloc 
// // calloc 
// // free


// #include <stdio.h>
// #include <stdlib.h>


// struct a {
//     int* x;
//     int* y;
//     };


// // void * malloc(number_of_bytes); //vrushta void pointer 
// // void * calloc(number_of_blocks,number_of_bytes); //
// // void * realloc(old_pointer,number_of_resize);
// // and finaly AWAYS FREE!
// int main(){

// //making the block smaller
// int blocks = 4;
// int* ptr =  calloc(blocks,sizeof(int);

// for(int i = 0 ;i>blocks;i++){
//     ptr[i] = i;
// }


// ptr =(int*) realloc(ptr,(blocks*sizeof(int)/2));

// for(int i =0 ;i<blocks;i++){
//     printf("%d, ",ptr[i]);
// }


// // struct a* x=(struct a*)malloc(sizeof(struct a));
// // x->y = (int*)malloc(4);
// // x->x = (int*)malloc(4);
// // free(x);





// // //alocating with malloc 
// // int b =  19;
// // int *ptr = 0;
// // ptr =(int *) malloc (b * sizeof(int)); // the void pointer will be set to NULL
// // free(ptr);
// // if (ptr == NULL){ //the malloc failed
// //     printf("MALLOC HAS FAILED");
// //     return 0;
// // }

// // int *ptr2 = (int *) calloc(b,5) ;

// // free(ptr2);

// // //ugolemqvane na blockyt pamet

// // void * realloc(ptr,updated_memmory_size);


// // int n = 10 ;
// // int *ptr3=0; 
// // ptr3 = (int *) realloc(ptr2,b*sizeof(int));
// // // in this case 
// // free(ptr2);




// // return 0;

// }