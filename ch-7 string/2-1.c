#include <stdio.h>
#include <string.h>

main()
{
    char password[20];
    int upr = 0, sm = 0, digit = 0, symbol = 0;

    printf("Enter your password: ");
    scanf("%s", password); 

        for (int i = 0; password[i] != '\0'; i++)
        {
            if (password[i] >= 65 && password[i] <= 90)
            {
                upr++;
            }
            else if (password[i] >= 97 && password[i] <= 122)
            {
                sm++;
            }
            else if (password[i] >= 48 && password[i] <= 57)
            {
                digit++;
            }
            else
            {
                symbol++;
            }
        }

        if (upr >= 1 && sm >= 1 && digit >= 1 && symbol >= 1  && strlen(password) >= 6)
        {
            printf("your password is strong");
        }
        else
        {
            printf("your password is week");
        }
}