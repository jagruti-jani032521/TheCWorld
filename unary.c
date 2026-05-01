#include <stdio.h>

main()
{
	int a = 25;
	
	printf("%d\t",a++);
	printf("%d\t",--a);
	printf("%d\t",a--);
	printf("%d\n\n\n",++a);
	
	int n = 979;
	
	printf("%d\t",++n);
	printf("%d\t",--n);
	printf("%d\t",n--);
	printf("%d\t",++n);
	printf("%d\t",--n);
	printf("%d",n--);
}
