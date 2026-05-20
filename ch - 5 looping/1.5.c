#include <stdio.h>

main()
{
	int start,end;
	
	printf("enter the first number : ");
	scanf("%d" ,&start);
	
	printf("enter the second number : ");
	scanf("%d" ,end);
	
	while (start % 4 == 0 );
	{
		printf("%d" ,start);
		start++;
	}
}
