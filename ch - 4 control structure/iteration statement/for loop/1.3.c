#include <stdio.h>

main()
{
	int i = 1;
	int n;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	for(i = 1; i <= n; i++)
	   printf("%d\t" ,i);
}

