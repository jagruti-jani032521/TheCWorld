#include <stdio.h>

main()
{
	int n,digit;
	int sum = 0;	
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	int org_n = n;
	
	while(n > 0)
	{
		digit = n%10;
		sum += (digit*digit*digit);
		n = n/10;
		
	}
	
	printf("%d\n" ,sum);
	
	(org_n == sum)? printf("%d is armstrong number." ,org_n) : 	printf("%d is not armstrong number." ,org_n);

}

