#include <stdio.h>

main()
{
    int size;

    printf("enter number of elements: ");
    scanf("%d", &size);

    int a[size];

    int *ptr[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter  a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", *ptr[i]);
        sum += *ptr[i];
    }
    printf("\nsum: %d", sum);
}