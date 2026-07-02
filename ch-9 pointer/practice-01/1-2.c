#include <stdio.h>

int swap (int *x, int*y)
{
    int z = *x;
    *x =*y;
    *y = z;
}

int main()
{
    int x, y;

    printf("\n\ninput\n\n");
    printf("enter first and second number :");
    scanf("%d %d" ,&x, &y);

     printf("\n\noutput\n\n");
     printf("before swapping :\n");
     printf(" x = %d\n y = %d\n", x, y);       

    swap(&x, &y);

    printf("\n\n");
    printf("after swapping :\n");
    printf(" x = %d\n y = %d\n", x, y);
}