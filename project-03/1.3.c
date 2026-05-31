#include <stdio.h>

main()
{
	int n, sum, first, last;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
		
	last = n % 10;

    while(n > 0)
	{
     first = n%10;
	 n/=10;   
	}
	sum = first+last;
	   
    printf("the sum of first and last digit is %d " ,sum);
	
}
