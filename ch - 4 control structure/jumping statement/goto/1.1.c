#include <stdio.h>

main()
{
	int i = 1;

	label :
		
		printf("%d hello programming\n" ,i);
		i++;
		 
	    if(i <= 10)
	        goto label;
}
