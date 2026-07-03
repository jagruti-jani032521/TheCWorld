#include <stdio.h>

void main()
{
    char str[20];

    printf("Enter any string : ");
    scanf("%s" ,&str);

    printf("\n\n");

    int length = 0;

    int*ptr = &length;

    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("The length of string is : %d", *ptr);
}