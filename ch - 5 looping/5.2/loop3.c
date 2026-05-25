#include <stdio.h>

main()
{
	int n;
	int digits, sum, mul;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	int org_n = n;
	
	do{
		digits = n%10;
		sum += digits;
		mul *= digits;
		n = n/10;
		
		
	}while(n > 0);
	
//	printf("%d\n" ,sum);
//	printf("%d\n" ,mul);
	
	(mul = sum) ? printf("%d is magic number." ,org_n) : printf("%d is not magic number.");
	
}
