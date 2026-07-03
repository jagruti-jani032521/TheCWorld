#include <stdio.h>


main()
{
    int size;

    printf("enter array's row & column size : ");
    scanf("%d" ,&size); 


    int a[size][size];

    printf("\n\n array input \n\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("enter a[%d][%d] : " ,i, j);
            scanf("%d" ,&a[i][j]);
        }
        printf("\n");
    }
    int n[size][size];

    printf("\n\n array output \n\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            n[j][i] = a[i][j];

        }
    }
    
    printf("\n\n the traspose matrix is : \n\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d\t" ,n[i][j]);
        }
        printf("\n");
    }
}