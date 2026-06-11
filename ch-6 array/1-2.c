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
    
    int sum = 0;
    
    printf("\n\n output \n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t" ,a[i]);
        sum += a[i];
    }
    printf("\n\n");
    printf("array element sum : %d\n" ,sum);
    printf("AVG : %.2f" ,(float)sum/size);
}