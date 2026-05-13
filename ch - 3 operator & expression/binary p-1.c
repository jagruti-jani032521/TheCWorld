#include <stdio.h>

main()
{
	float x , y;
	
	printf("enter value of x :");
	scanf("%f" ,&x);
	
	printf("enter value of y :");
	scanf("%f" ,&y);
	
	printf("final answer is %.2f :" ,x*x+2*x*y+y*y);

}
