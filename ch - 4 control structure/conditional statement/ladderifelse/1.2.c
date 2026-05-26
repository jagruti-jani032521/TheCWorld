#include <stdio.h>

main()
{
	int a,b,c,d;
	
		printf("enter value of a :");
		scanf("%d" ,&a);
		printf("enter value of b :");
		scanf("%d" ,&b);
		printf("enter value of c :");
		scanf("%d" ,&c);
		printf("enter value of d :");
		scanf("%d" ,&d);
		
		
			if (a>b && a>c && a>d){
				printf("the maximum value is %d" ,a);
			}
			else if (b>a && b>c && b>d){
			    printf("the maximum value is %d" ,b);
			}
			else if(c>a && c>b && c>d){
				printf("the maximum value is %d" ,c);
			}else{
			    printf("the maximum value is %d" ,d);
			}
}
