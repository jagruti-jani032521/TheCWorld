#include <stdio.h>

main()
{
    int i, j, size;

    printf("enter size of array : " );
    scanf("%d" ,&size);

    int a[size];

    printf("\n\n input \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("enter element : ");
        scanf("%d" ,&a[i]);
    }
   
    printf("\n\n output \n\n");
    for ( i = 0; i < size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(a[i] < a[j])
            {
                int c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
         printf("%d\t" ,a[i]);
    }
}