#include <stdio.h>

main()
{
	int n;
	int rem, rev = 0;

	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	int org_n = n;

	
	while(n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n/10;
    }
	printf("%d\t\n" ,rev);
		
	if ( org_n != rev){
		printf("this value is not pallindrom ." ,org_n);
    }else {
	   	printf("this value is pallindrom ." ,org_n);
	}
}

