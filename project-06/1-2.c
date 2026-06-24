#include <stdio.h>

main()
{
    char str[20];

    printf("Enter your string: ");
    scanf("%s", str);

    printf("Frequency of each letter :\n");
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    for (int i = 0; i < len; i++)
    {
        int frequency = 1;

        for (int j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                frequency++;
                str[j] = '\0';
            }
        }

        if (str[i] != '\0')
        {
            printf("%c => %d\n", str[i], frequency);
        }
    }
}