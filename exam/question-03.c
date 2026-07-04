#include <stdio.h>
#include "functio.c"

void main()
{
    int year;

    printf("Enter any year :");
    scanf("%d", &year);

    check(year);
}