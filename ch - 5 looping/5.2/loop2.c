#include <stdio.h>

main()
{
	int n;
	int digit , sum ;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	int org_n = n;
	
	
	do{
		digit = n%10;
		sum += (digit*digit*digit);
		n = n/10;
		
	}while(n > 0);
	
//	printf("%d\n" ,sum);
	
	(org_n != sum)? printf("%d is armstrong number" ,org_n) : printf("%d is not armstrong number" ,org_n);
}
