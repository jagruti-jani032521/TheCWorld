#include <stdio.h>

main()
{
    char str[20];


    printf("Enter any string: ");
    scanf("%[^\n]", &str);

    printf("\n\n");
    printf(" string : %s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] -= 32;
        }
    }

    printf("\n\n");
    printf("titlecase : %s", str);
}