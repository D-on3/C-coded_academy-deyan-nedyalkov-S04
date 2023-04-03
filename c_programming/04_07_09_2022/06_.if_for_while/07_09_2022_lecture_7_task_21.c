/*
Задача 21. За множеството от положителните цели числа, дефинираме следната итеративна редица:
ако n е четно число, следващото число е n/2, ако n е нечетно число, следващото става 3*n+1
Например, ако се започне с числото 13, ще се получи редицата
13, 40, 20, 10, 5, 16, 8, 4, 2, 1
Редицата завършва, когато се получи 1.
Напишете програма, която извежда от кое число, между 200 и 2000 трябва да се започне, че да се
получи най-дълга редица.
Да се изведе дължината на редицата и самата редица 
*/




int CalcOdd(int n);
int CalcEven(int n);
int main(){

int iNum=0;
int iCounter= 0;
printf("Enter Number:   \n");
scanf("%d",&iNum);
for(iNum;iNum>1;iCounter++){

if(iNum % 2 == 0){
    iNum =CalcEven(iNum);
    }
else if(iNum % 2 != 0){
    iNum = CalcOdd(iNum);
    }
if(iNum == 1){
    iCounter++;
    break;
    }
}

printf("%d",iCounter);

return 0;
}


int CalcOdd(int n){
    n /= 2;
    return n;
}

int CalcEven(int n){
    n = 3*n+1;
    return n;
}
