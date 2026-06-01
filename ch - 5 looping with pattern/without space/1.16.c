#include <stdio.h>

main()
{
	int i, j;
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
		   if(i%2 != 0)
		   {
		   	printf("%d ",j);
		   }
		   else	if(j%2 == 0)
		   {
		   	printf("%c " ,j+96);
		   }
		   else
		   {
		   	printf("%c " ,j+64);
		   }
		}
	printf("\n");
	}
}





