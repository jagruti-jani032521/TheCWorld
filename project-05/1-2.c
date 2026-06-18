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

    printf("\n\n array output \n\n");
    int n = a[0][0];

     for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(a[i][j] > n) 
            {
              n = a[i][j];
            } 
        }
    }
    printf("the largest element is : %d " ,n);
}