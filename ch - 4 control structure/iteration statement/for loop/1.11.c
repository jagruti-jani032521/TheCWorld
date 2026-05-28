#include <stdio.h>

main()
{
	int i,n,mul;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	for (i = 1; i <= n; i++){
		mul *= i;
	}
	

	  printf("the factorial of %d is %d"  ,n,mul);
    
}
