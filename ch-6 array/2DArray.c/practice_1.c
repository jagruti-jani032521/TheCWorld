#include <stdio.h>

main()
{
    int row, col;

    printf("enter row : ");
    scanf("%d", &row);
    printf("enter column : ");
    scanf("%d", &col);

    int a[row][col];

    printf("\n\narray input\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += a[i][j];
        }
        printf("\n");
    }
    printf("2D Array average : %.2f\n", (float)sum / (row * col));
}