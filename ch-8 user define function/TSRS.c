#include <stdio.h>

int square(int num)
{
    return num * num;
}

void main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square : %d " , square(num));
}