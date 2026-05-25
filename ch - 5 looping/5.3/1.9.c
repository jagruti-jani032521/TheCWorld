#include <stdio.h>

main()
{
	int n , i;
	long factorial = 1;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	for (i = 1; i <= n; i++){
		
		factorial *= i;
	}
	
	printf("the factorial of %d is %ld" ,n,factorial);
}
