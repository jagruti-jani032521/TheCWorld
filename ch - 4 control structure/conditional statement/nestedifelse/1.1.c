 #include <stdio.h>

main()
{
	float a,b,c;
	
	printf("Enter maths marks : ");
	scanf("%f", &a);
	
	if(a>=0 && a<=100)
	{
		printf("Enter science marks : ");
		scanf("%f",&b);
		
		if(b>=0 && b<=100)
		{
			printf("Enter english marks : ");
			scanf("%f",&c);
			
			if(c>=0 && c<=100) {
				printf("average marks is %.2f :" ,(a+b+c)/3);
				
			}
			else {
				printf("Invalid English Marks..");
			}
		}
		else
		{
			printf("Invalid Science Marks..");		
		}
	}
	else 
	{
		printf("Invalid Maths Marks..");
	}
}
