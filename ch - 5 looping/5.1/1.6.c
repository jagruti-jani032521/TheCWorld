#include <stdio.h>

main()
{
	int n;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	int i = 0;
	int  pre_sum = 0,sum = 1,cur_sum;
	
	 printf("%d\t%d\t" ,pre_sum,sum);
	 	
	while(i <= n)
	{
		cur_sum = pre_sum + sum;
		pre_sum = sum;
		sum = cur_sum;
		printf("%d\t" ,cur_sum);
        i++;
    }

}
