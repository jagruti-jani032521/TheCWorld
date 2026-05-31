#include <stdio.h>

main()
{
	int n, count = 0;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	while(n != 0)
	{
		count++;
		n = n/10;
	}
	printf("total number of digit is %d" ,count);
	
	
//	for(; n != 0; n = n/10)
//	{
//		count++;
//	}
//	printf("total number of digit is %d" ,count);

}
