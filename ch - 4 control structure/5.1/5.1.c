#include <stdio.h>

main()
{
	int a,b,c;
		
		printf("enter value of a :");
		scanf("%d" ,&a);
		printf("enter value of b :");
		scanf("%d" ,&b);
		printf("enter value of c :");
		scanf("%d" ,&c);
		
		      	if (a<b && a<c)
				    {
		      	     	printf("the minimum value is %d :" ,a);
		      	        }else if (b<c){
				            	printf("the minimum value is %d :" ,b);
				  }else {
					  	printf("the minimum value is %d :",c);
					}

}
