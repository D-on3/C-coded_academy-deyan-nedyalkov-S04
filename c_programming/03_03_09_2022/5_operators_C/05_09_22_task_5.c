/*Задача 5:
В какъв ред ще се изпълнят операциите?
t = x && y & x << 1;
Какво ще се принтира на екрана?
В какъв ред ще се изпълнят операциите?
t = x && y^x <<1;
Какво ще се принтира на екрана?*/



int main(){


int x = 10;
int y = 10;
int z = 30;
int t = x==y + (z < y) != 20;

printf("%d",t);
}