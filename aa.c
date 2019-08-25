#include <stdio.h>
#include <windows.h>


void main()
{   
    void csd();
    int add(int x, int y);
    int a, b, c, d;
    unsigned u;
    a=12;b=24;u=10;
    c = a + u;
    d = b + u;
    // printf("a+u=%d, b+u=%d\n", c, d);
    // system("pause");
    csd();
}

void csd()
{
    char c;
    printf("input a character\n");
    c = getchar();
    putchar(c);
}

int add(int x, int y)
{
    return x + y;
}
