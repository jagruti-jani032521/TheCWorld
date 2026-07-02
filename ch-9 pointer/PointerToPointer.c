#include <Stdio.h>

void main()
{
    int num =60;

    int *ptr1;
    int **ptr2;         
    int ***ptr3;

    ptr1 = &num;
    ptr2 = &ptr1;   
    ptr3 = &ptr2;

    printf("Num\t: %d\n", num);
    printf("Ptr1\t: %d\n", *ptr1);
    printf("Ptr2\t: %d\n", **ptr2);
    printf("Ptr3\t: %d\n", ***ptr3);

    **ptr2 = 78;

    printf("Num\t: %d\n", num);
    printf("Ptr1\t: %d\n", *ptr1);
    printf("Ptr2\t: %d\n", **ptr2);
    printf("Ptr3\t: %d\n", ***ptr3);
    
}