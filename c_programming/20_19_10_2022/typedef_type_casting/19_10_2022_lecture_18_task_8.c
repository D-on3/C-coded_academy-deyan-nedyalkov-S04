#include <stdio.h>
#include <stdlib.h>

/*Задача 8. Напишете собствен тип за структура node, съдържаща един член
от тип int и един указател към тип самата структура. Заделете динамично
памет за масив от 10 елемента от тази структура с malloc. За всеки елемент
от масива попълнете цялото число с неговия пореден номер. Принтирайте
резултатите.*/

typedef struct node{
    int point;
    struct node *ptr;
} node;

int main(){
    node *struk = (node*)malloc(10*sizeof(node));
    if(struk == NULL){
        return 1;
    }

return 0;
}