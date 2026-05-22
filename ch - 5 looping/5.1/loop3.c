#include <stdio.h>

main()
{
	int n ,digit;
	int sum = 0;
	int mul = 1;
	
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	int org_n = n;
	
	while(n != 0){
		
		digit = n%10;
		sum += digit;
		mul *= digit;
		n = n/10;
	}
	
	printf("%d\n" ,sum);
	printf("%d\n" ,mul);
	
		(mul == sum)? printf("%d is magic number." , org_n) : 	printf("%d is not magic number." , org_n );

}
