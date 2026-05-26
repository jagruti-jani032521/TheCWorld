#include <stdio.h>

main()
{
	int start,end;
	
	printf("enter the first number : ");
	scanf("%d" ,&start);
	
	printf("enter the second number : ");
	scanf("%d" ,&end);
	
	
	while (start <= end )
	{
		if (start % 4 == 0 )
		printf("%d\t" ,start);
		start++;
	}
} 
