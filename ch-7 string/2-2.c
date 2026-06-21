#include <stdio.h>
#include <string.h>

main()
{
    char email[20], password[20];

    char correctEmail[] = "admin@gmail.com";
    char correctPassword[] = "123456";

    printf("Enter your email: ");
    scanf("%s", &email);

    printf("enter your password : ");
    scanf("%s", &password);

    int emailcmp = 1, passwordcmp = 1;

    // printf("\n\n email compare \n\n");
    for (int i = 0; email[i] != '\0' || correctEmail[i] != '\0'; i++)
    {
        if (email[i] != correctEmail[i])
        {
            emailcmp = 0;
            break;
        }
    }

    // printf("\n\n password compare \n\n");
    for (int i = 0; password[i] != '\0' || correctPassword[i] != '\0'; i++)
    {
        if (password[i] != correctPassword[i])
        {
            passwordcmp = 0;
            break;
        }
    }

    if (emailcmp && passwordcmp)
    {
        printf("login successful...");
    }
    else
    {
        printf("login failed.invalid credentials.");
    }
}