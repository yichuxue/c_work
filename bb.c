#include <stdio.h>
#include <windows.h>

void main() {
    int mas(int x, int y);
    int add(int x, int y);
    printf("bb.c\n");
    system("pause");
}

int mas(int x, int y)
{
    int z;
    z = z > y ? z : y;
    return z;
}

int add(int x, int y)
{
    return x + y;
}