#include <stdio.h>
#include "functio.c"

int main()
{
    int a, b;

    printf("Enter first and second numbers :");
    scanf("%d %d", &a, &b);

    int *ptr1 = &a;
    int *ptr2 = &b;

    swap(ptr1, ptr2);

    printf("After swapping, the values are :\n");
    printf(" 'A': %d\n", *ptr1);
    printf(" 'B': %d", *ptr2);
}