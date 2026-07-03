#include <stdio.h>
#include "functio.c"

int main()
{
    int n, row,col;

    printf("enter array size : ");
    scanf("%d", &n);

    int a[n][n];
    int *ptr = &a[0][0];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("a[%d][%d] : ", i, j);
            scanf("%d" ,&a[i][j]); 
        }
    }

    
    printf("\n\nCube of all elements of 2D array : \n\n");

    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", cube(&a[i][j], n));
        }
        printf("\n");
    }

    cube(ptr, n);

}