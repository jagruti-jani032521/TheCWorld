#include <stdio.h>

main()
{
	int i = 1;
	int n;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	while (n >= i)
	{
		printf("%d\t" ,n);
		printf("%d" ,n % 2 == 0);
		n--;

	}
}

