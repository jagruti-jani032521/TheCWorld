#include <stdio.h>

main()
{
	int i;
	int n;
	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	for (i = n; i >= 1; i--){
	
	    if (i % 2 != 0){
		printf("%d\t" ,i);
		
    	}
	}
}
