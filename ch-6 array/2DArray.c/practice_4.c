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
            if(i == 0 || j == 0 || i == row-1 || j == col-1)
            {
            sum += a[i][j];
            }
        }
    printf("\n");
    }
    printf("the sum of boundary element of an array is %d " ,sum);
}