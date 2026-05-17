#include <stdio.h>

main()
{
		float base_salary , hra_percent , da_percent ,ta_percent;
		float gross_salary , hra ,da ,ta;
		
		printf("enter base salary :");
		scanf("%f" ,&base_salary);
		
		printf("enter HRA percentages :");
		scanf("%f" ,&hra_percent);
		printf("enter DA percentages :");
		scanf("%f" ,&da_percent);
		printf("enter TA percentages :");
		scanf("%f" ,&ta_percent);
		
		hra = (base_salary * hra_percent)/100;
		da = (base_salary * da_percent)/100;
		ta = (base_salary * ta_percent)/100;

		gross_salary = base_salary+hra+da+ta;
		
		printf("gross salary is %.2f " ,gross_salary);
}
