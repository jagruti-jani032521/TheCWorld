#include <stdio.h>

main()
{
    char str[20];


    printf("Enter any string: ");
    scanf("%[^\n]", &str);

    printf("\n\n");
    printf("string : %s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    printf("\n\n");
    printf("UPPERCASE : %s", str);
}