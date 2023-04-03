/*Задача 12 Напишете програма на C, която с помощта на цикъл while намира gcd(a,b) – найголемият общ делител на две числа a и b, които се въвеждат.
*За целта използвайте алгоритъма на Паскал
*Ако двете числа са равни, то всяко от тях е НОД, иначе от по-голямото изваждаме по-малкото,
*докато двете станат равни.
*/

int gcd(int a,int b);
int main(){

int result= 0;
int nA =0;
int nB= 0;

scanf("%d",&nA);

scanf("%d",&nB);


while(result!= 0){result=gcd(nA,nB);}


    return 0;
}


int gcd(int a,int b)
{
    int max = 0;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            if (a > b && a % b == 0 && b > max)
                max = a;
    return max;
}