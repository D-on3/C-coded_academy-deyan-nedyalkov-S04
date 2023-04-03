/*
Задача 7. Направете функция struct point makepoint(int x, int y),
 която създава две точки. Използвайте malloc().
*/



#include <stdio.h>
#include <stdlib.h>

typedef struct Point Point;

struct Point
{
    int x;
    int y;
};

Point* makePoint(int x, int y) {
    Point* p = (Point*)malloc(sizeof(int) * 2);

    p->x = x;
    p->y = y;

    return p;
}

void printPoint(Point p) {
    printf("point: (%d,%d)\n", p.x, p.y);
}

int main() {
    int x, y;
    puts("Enter x and y");
    scanf("%d %d", &x, &y);
    Point* p = makePoint(x, y);
    printPoint(*p);

    free(p);

    return 0;
}