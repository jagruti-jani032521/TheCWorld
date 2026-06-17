#include <stdio.h>

main()
{
    int row, col;

    printf("enter row : ");
    scanf("%d", &row);
    printf("enter column : ");
    scanf("%d", &col);

    int a[row][col], b[row][col];
    int sum[row][col];
    
    printf("\n\n first array input\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n second array input\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("b[%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
        printf("\n");
    }
    printf("2DAraay sum : %d\t", sum);

}