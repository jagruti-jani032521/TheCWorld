#include <stdio.h>

main()
{
	int n;
	int i = 1;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	do
	{
		printf("%d\t" ,i);
		i++;
	}while(i <= n);
}
