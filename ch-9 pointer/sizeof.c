#include <stdio.h>

void main() 
{
    printf("int bytes: %lu bytes\n", sizeof(int));
    printf("char bytes: %lu bytes\n", sizeof(char));
    printf("float bytes: %lu bytes\n", sizeof(float));
    printf("double bytes: %lu bytes\n", sizeof(double));
    printf("long bytes: %lu bytes\n", sizeof(long int));
    printf("long long bytes: %lu bytes\n", sizeof(long long int));

    int a[100];

    printf("\n\n");
    printf("Array Bytes: %zu bytes\n", sizeof(a));

    char name[20];
    
    printf("\n\n");
    printf("String Bytes: %zu bytes\n", sizeof(name));
}
