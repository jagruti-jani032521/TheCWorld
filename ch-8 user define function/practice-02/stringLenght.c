#include <stdio.h>
#include "function.c"

int main()
{

    char str[20];

    printf("enter any string : ");
    scanf("%s", &str);

    int length = stringLength(str);

    printf("length is %d", length);

}
