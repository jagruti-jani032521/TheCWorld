#include <stdio.h>

int addition()
{

    int a, b;

    printf("enter a and b : ");
    scanf("%d %d", &a, &b);

    return a + b;
}

int inputInt()

{
    int n;

    scanf("%d", &n);

    return n;
}

void main()
{
    printf("Ans : %d\n", addition());

    int age;

    printf("Enter your age : ");
    age = inputInt();

    printf("Age : %d\n", age);
}