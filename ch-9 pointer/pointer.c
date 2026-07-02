#include <stdio.h>

void main()
{
    int num = 63;

    int *ptr;

    ptr = &num;

    printf("Num\t: %d\n", num);
    printf("Ptr\t: %d\n", *ptr);

    num = 78;

    printf("Num\t: %d\n", num);
    printf("Ptr\t: %d\n", *ptr);

    *ptr = 12;

    printf("Num\t: %d\n", num);
    printf("Ptr\t: %d\n", *ptr);
}