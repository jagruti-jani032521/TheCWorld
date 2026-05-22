#include <stdio.h>

main()
{
	int i = 0;
	int n;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	while (n >= i )
	{
	    if (n % 2 != 0)
		printf("%d\t" ,n);
		n--;

	}
}

