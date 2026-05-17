#include <stdio.h>

main()
{
	
	float a,b,c ,triangle_angle;
	
	printf("first angle is : ");
	scanf("%f" ,&a);
	
	printf("second angle is : ");
	scanf("%f" ,&b);
	
	triangle_angle = (180-(a+b));
	
	printf("triangle angle c is %.2f" , triangle_angle);	
	
}
