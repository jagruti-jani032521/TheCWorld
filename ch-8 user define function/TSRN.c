#include <stdio.h>

void sum(int x, int y)
{
    printf("%d + %d = %d\n", x, y, x + y);
}

void getParams(char ch, float PI)
{
    printf("Character: %c\n", ch);
    printf("PI: %.2f\n", PI);
}

void main()
{
    sum(5, 10);
    getParams('J', 3.14);
}