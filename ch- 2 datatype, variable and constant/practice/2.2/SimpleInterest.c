#include <stdio.h>

main()

{
	float p,r;
	int n;
	
	printf("enter principle amount : ");
	scanf("%f", &p);
	printf("enter the rate : ");
	scanf("%f", &r);
	printf("enter time in a month : ");
	scanf("%d", &n);
	
	printf("simple interest is : %.2f" ,p*r*n/100);
}
