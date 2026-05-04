#include <stdio.h>

main()

{
	float x , y;
	
	printf("enter value of x :");
	scanf("%f" ,&x);
	
	printf("enter value of y :");
	scanf("%f" ,&y);
	
	printf("final answer is %.2f :" ,x*x*x+3*x*x*y+3*x*y*y+y*y*y);
}
