#include <stdio.h>

main()
{
    int row, col;
    int sum = 0;

        printf("enter row : ");
        scanf("%d" ,&row);
        printf("enter column : ");
        scanf("%d" ,&col);

    int a[row][col];

    printf("\n\n array input \n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter a[%d][%d] : " ,i, j);
            scanf("%d" ,&a[i][j]);
        }
        printf("\n");
    }            

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        { 
            if(i+j == row-1)
            {
            sum += a[i][j];
            }
    printf("\n");
        }
    }
    printf("sum of anti-diagonal element of an array is %d ",sum);
}
    // int sum = 0; 

    // for (int  i = 0; i < row; i++)
    // {
    //     for (int j = 0; i < col; j++)
    //     {
    //         sum += a[i][j];
    //     }
    //    printf("\n");
    // }
