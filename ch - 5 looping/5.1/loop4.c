#include <stdio.h>

main()
{
	int n;
	int i = 2;
	
	printf("enter any number :");
	scanf("%d" ,&n);
	
	while(i < n)
	{
		n % i == 0;
		i++;
	}
	if (n > 1)
	{
		printf("%d is prime number" ,n);
	}else{
		printf("%d is not prime number" ,n);
	}
}
