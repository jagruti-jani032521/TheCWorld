#include <stdio.h>

main()
{
	float a,b,c;
	
	printf("enter maths value :");
	scanf("%f" ,&a);
	if (a <= 100){
		printf("enter english value :");
		scanf("%f" ,&b);
		if (b <= 100){
			printf("enter science value :");
			scanf("%f" ,&c);
			if (c <= 100){
				printf("average is %.2f :" ,(a+b+c)/3);
            }else {
            	printf(" c value must be 100 or below it\n");
		    }
		}
		else {
			printf(" b value must be 100 or below it\n");
		}
	}else {
		printf(" a value must be 100 or below it\n");
	}
}
