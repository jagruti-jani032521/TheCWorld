#include <stdio.h>

main()
{
	int n;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	int i = 0;
	int  pre_sum = 0,sum = 1;
	int cur_sum;
	
	 printf("0\t1\t");
	 	
	do{
		cur_sum = pre_sum + sum;
		pre_sum = sum;
		sum = cur_sum;

		printf("%d\t" ,cur_sum);
        i++;

	}while(i <= n);

}




