#include <stdio.h>

void main()

{
    int a[20] = {1, 2, 3, 4, 5};

    int *ptr[20];

    ptr[0] = &a[0];

    for (int i = 0; i < 5; i++)
    {

        printf("%d\t", *ptr[i]);
    }
}