#include <stdio.h>

main()

{
	int a,b;
	
	printf("value of a :", a);
	scanf("%d" ,&a);
	
	printf("value of b :", b);
	scanf("%d" ,&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("final value of %d %d" ,a,b);
	
	
}
