#include <stdio.h>

main()
{

    int size;

    printf("enter the array's size : ");
    scanf("%d" ,&size);

    int a[size];

    printf("\n\n input \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("enter element : ");
        scanf("%d" ,&a[i]);
    }
    
    printf("\n\n");
    printf("the negative elements are :");
    for (int i = 0; i < size; i++)
    {
        if(a[i] < 0)
        {
            printf("%d\t" ,a[i] );
        }
    }
}


