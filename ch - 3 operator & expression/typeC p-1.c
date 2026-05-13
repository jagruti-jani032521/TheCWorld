#include <stdio.h>

main()

{
	int a,b,c;
	
//	printf("value of c :", c);
//	scanf("%d" ,&c);
	
	printf("value of a :", a);
	scanf("%d" ,&a);
	
	printf("value of b :", b);
	scanf("%d" ,&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("final value of %d %d" ,a,b);
	
}
