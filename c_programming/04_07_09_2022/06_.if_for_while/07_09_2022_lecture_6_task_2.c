/*       2. Да се напише програма, която чете едно произволно цяло число, отделя
последната му цифра и проверява дали тази цифра е 0 или 5, т.е. дали това
число се дели на 5. В случай, че числото се дели на 5, се извежда
съобщението “Deli se na 5”, в противен случай извежда съобщението “Ne se
deli na 5”.               */
#include<stdio.h>

int main(){
    int iNum=0;
    printf("Enter a whole number: ");
    scanf("%d \n",&iNum);

    if(iNum % 5 == 0){
        printf("The number is divisible by 5 \n");
    }else printf("The number is not divisible on 5 \n");
    return 0;


}