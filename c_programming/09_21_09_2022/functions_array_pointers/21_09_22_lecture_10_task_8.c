/*Задача 8. Използвайте do-while цикъл, за да напишете функцията void
itoa(int n, char s[ ]), която преобразува число в символен низ (обратната
функция на atoi). */


void itoa(int n, char s[]);

int main(){
    int num = 245;
    char s[16];
    itoa(num, s);

}

void itoa(int n, char s[]){
    char flag ='n';
    int i=0;

    if (n<0){
        flag = 'y';
    }

    do{
        s[i] = n%10 +'0';
        i++;
        n/=10;
    }while(n>0);

    if(flag=='y'){
        s[i]='-';
        i++;
        s[i]='\0';
    }
    else{
        s[i]='\0';
    }
}