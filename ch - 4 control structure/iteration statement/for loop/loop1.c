#include <stdio.h>

main()
{
	int n;
	int rem, rev = 0;

	
	printf("enter any number : ");
	scanf("%d" ,&n);
	
	int org_n = n;

	for (; n != 0; n = n/10){
		rem = n % 10;
		rev = rev * 10 + rem;
	}
	
	if ( org_n != rev){
		printf("this value is not pallindrom ." ,org_n);
    }else {
	   	printf("this value is pallindrom ." ,org_n);
	}
}

