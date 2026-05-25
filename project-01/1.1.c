#include <stdio.h>

main()
{
	float a ,temprature;
	
	printf("enter the temprature in celcius :");
	scanf("%f" , &a);
	
	temprature  = ((9.0/5.0) * a)+32;
	
	printf("the temprature in fahrenheit is %.2f" ,temprature);
}
