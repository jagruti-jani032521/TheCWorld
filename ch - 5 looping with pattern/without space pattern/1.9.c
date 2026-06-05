#include <stdio.h>

main()
{
	int i,j;
	
	for(i=5; i>=1; i--)
	{
		
		for(j=i; j<=5; j++)
		{
		   (i%2)? printf("0 ") : printf("1 ");
		}
	printf("\n");
	}
}
