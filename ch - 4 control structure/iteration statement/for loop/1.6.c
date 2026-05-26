#include <stdio.h>

main()
{
	int n;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	int i;
	int  pre_sum = 0,sum = 1,cur_sum;
	
	 printf("%d\t%d\t" ,pre_sum,sum);
	 	
	for (i = 0; i <= n; i++)
	  if (cur_sum = pre_sum + sum ,pre_sum = sum ,sum = cur_sum)
		  {
		     printf("%d\t" ,cur_sum);
          }
}
