#include <stdio.h>

int cube(int a)
{
   return a * a * a;
}

int main()
{
    int num, ans;

    printf("\n\n");
    printf("enter any number : ");
    scanf("%d" ,&num);

    ans = cube(num);

    printf("Cube is : %d" ,ans);

}