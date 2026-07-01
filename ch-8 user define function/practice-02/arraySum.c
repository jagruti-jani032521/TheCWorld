#include <stdio.h>
#include "function.c"

int main()
{
    int a[20], size, i, sum;

    printf("\n\n");
    printf("enter array size : ");
    scanf("%d", &size);

    printf("\n\n");
    printf("enter array elements : \n");

    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    sum = arrayElementSum(a, size);

    printf("\n\n");
    printf("the sum of an array : %d", sum);
}






























































