#include <stdio.h>

main()
{
	float marks;
	
	printf("enter your marks :");
	scanf("%f" ,&marks);
	
	(marks<=100 && marks>=91)?  printf(" grade : 'A','excellent work!'"):
	(marks<=90 && marks>=80)?  printf(" grade : 'B','well done.'"):
	(marks<=79 && marks>=65)?  printf("grade :'C','good job.'"):
	(marks<=64 && marks>=55)?  printf("grade :'D','you passed,but you could do better'"):
	(marks<=54 && marks>=33)?  printf("grade :'E','you need to be more attentive'"):  printf("grade :'F','sorry,you failed'");

}
