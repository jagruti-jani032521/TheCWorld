#include <stdio.h>

main()

{
    int size;

        printf("enter size of array : ");
        scanf("%d" ,&size);

    int a[size];

    printf("\n\n input \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("enter element : ");
        scanf("%d" ,&a[i]);
    }
    
}   
