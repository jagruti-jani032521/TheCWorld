#include <stdio.h>

main()
{
	int n;
	int rem, rev = 0;

	printf("enter any number : ");
	scanf("%d" ,&n);
	
	int org_n = n;

	do{
		
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n/10;
		

	}while(n != 0);
	printf("%d\t\n" ,rev);

	( org_n != rev) ?  printf("this value is not pallindrom ." ,org_n) : printf("this value is pallindrom ." ,org_n);
} 
