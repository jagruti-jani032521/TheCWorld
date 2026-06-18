#include <stdio.h>

main()
{

    int row, col;

    printf("enter the array's row size : ");
    scanf("%d" ,&row);
    printf("enter the array's column size : ");
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

    int sum = 0;

    int r;

    printf("\n\n array output \n\n");
    printf("enter row number :");
    scanf("%d" ,&r);

    printf("elements of row %d are : " ,r);
    for (int j = 0; j < col; j++)
    {
        printf("%d\t" ,a[r][j]);
        sum += a[r][j];
    }  

    printf("\n");
    printf("sum of elements in row %d is : %d" ,r, sum);
    printf("\n\n");

    int sum1 = 0;
    int c;

    printf("enter column number :");
    scanf("%d" ,&c);

    printf("elements of column %d are : " ,c);
    for (int i = 0; i < row; i++)
    {
        printf("%d\t" ,a[i][c]);
        sum1 += a[i][c];
    }  

    printf("\n");
    printf("sum of elements in column %d is : %d" ,c, sum1);
}
