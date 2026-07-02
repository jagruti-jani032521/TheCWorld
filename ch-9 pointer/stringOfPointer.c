#include <stdio.h>

void main()
{

    char a[20];

    char *ptr[20];

    printf("Enter string: ");
    scanf("%s", &a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        ptr[i] = &a[i];
    }

    printf("String : %s", *ptr);
    
}