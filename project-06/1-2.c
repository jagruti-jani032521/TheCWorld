#include <stdio.h>

main()
{
    char str[20];

    printf("Enter your string: ");
    scanf("%s", str);

    printf("\n\n");
    printf("%s", str);

    int i, count = 0, frequency ;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    
    for (int i = 0; i < count; i++)
    {
        frequency = 1;
        for (int j = i + 1; j < count; j++)
        {
            if (str[i] == str[j])
            {
                frequency++;
                for (int n = j; n < count - 1; n++)
                {
                    str[n] = str[n + 1];
                }
                count--;
                j--;
            }
        }
        printf("\n\n");
        printf("Frequency of %c is %d", str[i], frequency);
    }
}