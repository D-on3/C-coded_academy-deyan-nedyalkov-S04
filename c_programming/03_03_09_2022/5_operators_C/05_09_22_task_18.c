/*Упражнение 18* Направете бягаща светлина, като приемете, че всеки бит от
        дадена променлива, е свързан с лампа (или светодиод). Когато битът е
        нула, лампата не свети, когато е единица свети.
Примерно, ако генерирате последователност:
1, 2, 3, 4, се получава следното:
1 *....................
2 .*...................
4 ..*..................
8 ...*................. ...
За да генерирате закъснение, използвайте следната функция от C runtime:
#include <unistd.h>
unsigned int sleep(unsigned int seconds);

*/
#include<stdio.h>
#include<unistd.h>
#include<string.h>

void reverse(char str[24] ,int lengthOfTheString);
void sleep_for();

int main(){

int iNumberOfTries= 0;
int iNumber;
int iCounter= 1;
int i;

//printf("Enter a Number \n");
//scanf("%d",&iNumber);
while(iNumberOfTries < 10){
int turn=0;
char toPrint[24]="";//todo reverse the string and give number to the lines/ 
char toPrintLenght=24;
//printf("%d",iCounter);
if(iCounter != 10) printf("[[%d ]]",iCounter);
else printf("[[%d]] ",iCounter);
        

for (turn = 1 << 23; turn > 0; turn = turn >> 1){
    (iCounter & turn) ? (strcat(toPrint,"*")): (strcat(toPrint,".")); 

}
reverse(toPrint,toPrintLenght);
printf("%s \n",toPrint);
sleep_for();

//scanf("%d",&iNumber);
iNumberOfTries ++;
iCounter ++;

}
return 0;
}


void reverse(char str[24],int lengthOfTheString){
    lengthOfTheString = strlen(str);
    for(int i=0;i<lengthOfTheString/2;i++){
    char straight = str[i];
    char reverse = str[lengthOfTheString-i-1];
    str[i] = reverse;
    str[lengthOfTheString-i-1] = straight;
}

}


void sleep_for(){

    unsigned seconds;
    seconds =1;
    sleep(seconds);
  }