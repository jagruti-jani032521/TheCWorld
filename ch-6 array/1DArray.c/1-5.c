#include <stdio.h>

main()
{
    int size, size1, size2;

    printf("enter size1 of array : ");
    scanf("%d", &size1);

    printf("enter size2 of array : ");
    scanf("%d", &size2);

    int a[size1], b[size2];
    size = size1 + size2;
    int merge[size];

    printf("\n\n first array input \n\n");
    for (int i = 0; i < size1; i++)
    {
        printf("enter a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    printf("\n\n second array input \n\n");
    for (int i = 0; i < size2; i++)
    {
        printf("enter b[%d] : ", i);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < size1; i++)
    {
        merge[i] = a[i];
    }

    for (int i = 0; i < size2; i++)
    {
        merge[i+size1] = b[i];
    }
    printf("\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", merge[i]);
    }
}