#include <stdio.h>
#include <stdlib.h>

typedef struct Point Point;
typedef struct Rect Rect;

struct Point
{
    int x;
    int y;
};

struct Rect
{
    Point begin;
    Point end;
};


Point makePoint(int x, int y) {
    Point p;
    p.x = x;
    p.y = y;
    return p;
}

Rect makeRect(Point begin, Point end) {
    Rect r;
    r.begin = begin;
    r.end = end;
    return r;
}

void printScreen(Rect screen) {
    for (int i = 0; i < screen.end.x; i++)
    {
        for (int j = 0; j < screen.end.y; j++)
        {
            putchar('-');
        }
        puts("");
    }
    puts("");
}

int main() {
    int xBegin, xEnd;
    int yBegin, yEnd;

    puts("Enter begin point");
    scanf("%d %d", &xBegin, &yBegin);
    Point begin = makePoint(xBegin, yBegin);

    puts("Enter end point");
    scanf("%d %d", &xEnd, &yEnd);
    Point end = makePoint(xEnd, yEnd);

    Rect screen = {begin, end};
    printScreen(screen);

    return 0;
}