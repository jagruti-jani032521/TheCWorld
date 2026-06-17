#include <stdio.h>

main()
{
    int size;

        printf("enter size of array : ");
        scanf("%d" ,&size);

    int a[size], b[size];
    int sum[size];

    printf("\n\n first array input \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("enter a[%d] : " ,i);
        scanf("%d" ,&a[i]);
    }
    
    printf("\n\n second array input \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("enter b[%d] : " ,i);
        scanf("%d" ,&b[i]);
    }

    for (int i = 0; i < size; i++)
    {
        sum[i] = a[i] + b[i];
        printf("%d\t", sum[i]);
    }
}