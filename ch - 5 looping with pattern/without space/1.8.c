#include <stdio.h>

main()
{
	int i,j;
	
	for(i=1; i<=5; i++){
		
		for(j=i; j<=5; j++)
		{
		   (i%2)? printf("0 ") : printf("1 ");
		}
	printf("\n");
	}
}
