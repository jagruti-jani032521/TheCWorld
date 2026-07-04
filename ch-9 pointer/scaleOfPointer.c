#include <stdio.h>

int main()

{
    int a[20] = {1, 2, 3, 4, 5};

    int *ptr[20];

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &a[i];
    }

    for (int i = 0; i < 5; i++)
    {

        printf("%d\t", *ptr[i]);
    }
}