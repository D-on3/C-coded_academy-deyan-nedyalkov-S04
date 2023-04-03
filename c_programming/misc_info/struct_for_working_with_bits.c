#include <stdio.h>

//Union is used as data struct
// That intrerpratate the data in diffrent way 
//USED FOR WORKING WITH BITS THE STRUCT REPRESENTS THE 
//BIT PLACEMENT 
// ALSO CAN BE USED 
typedef union{
struct {
    unsigned char b1:1;
    unsigned char b2:1;
    unsigned char b3:1;
    unsigned char b4:1;
    unsigned char reversed:4;
    
}bits;
unsigned char byte;
}HW_registerB; 



int main(){

    HW_registerB reg;
reg.bits.b1 = 1;
reg.bits.b2 = 0;
reg.bits.b1 = 1;
reg.bits.b2 = 0;
reg.byte = 5;
int represent = reg.byte;


    return 0;
}