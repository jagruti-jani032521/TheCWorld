#include <stdio.h>

main()
{
	float marks;
	char grade;
	
	printf("enter your marks :");
	scanf("%f" ,&marks);
	
	
	(marks<=100 && marks>=91)? ( grade = 'A') :
	(marks<=90 && marks>=80)?  ( grade = 'B') :
	(marks<=79 && marks>=65)?  ( grade = 'C') :
	(marks<=64 && marks>=55)?  ( grade = 'D') :
	(marks<=54 && marks>=33)?  ( grade = 'E') : ( grade = 'F');
	
	
	
	
	switch (grade){
		
		case 'A' :
			printf("your grade is 'A','Excellent work'");
		break;
		
		case 'B' :
			printf("your grade is 'B','Well done'");
		break;
		
		case 'c' :
			printf("your grade is 'C','Good job'");
		break;
		
		case 'D' :
			printf("your grade is 'D','You passed,but you could do better'");
		break;
		
		case 'E' :
			printf("your grade is 'E','You need to be more attentive'");
		break;
		
		case 'F' :
		    printf("your grade is 'F','Sorry,you failed'");
		break;
		
		default :
		    printf("invalid answer");
		break;	
		
	}
    
    if (marks<=100 && marks>=33)
	{
    	printf('Congratulation! You are eligible for the next level.');
	}
	else
	{
		printf('Please try again next time');
	}
    
}
