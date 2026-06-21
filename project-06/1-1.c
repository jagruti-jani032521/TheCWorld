#include <stdio.h>

main()
{

    char str[20];

    printf("Enter your string: ");
    scanf("%s", str);

    printf("\n\n");
    printf("%s", str);

    int i, lenght = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        lenght++;
       
    }

    printf("\n\n");
    printf("String length : %d", lenght);
       
    for (int i = 0; i < lenght; i++)
    {
        if (str[i] != str[lenght - 1 - i])
        {
            printf("\n\n");
            printf("The given string is not palindrome");
            break;
        }
        else
        {
            printf("\n\n");
            printf("The given string is palindrome");
            break;
        }
    }

    // for (int i = 0; str[i] != '\0'; i++)
    // {
    //     if (str[i] == str[strlen(str) - 1 - i])
    //     {
    //         printf("\n\n");
    //         printf("String is palindrome");
    //     }
    //     else
    //     {
    //         printf("\n\n");
    //         printf("String is not palindrome");
    //     }
    // }

   

}