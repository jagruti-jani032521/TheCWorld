#include <stdio.h>

main()
{
	
	int language, recharge;
	
	printf("\n\n Telecom Call Service \n\n");
	
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for gujrati\n\n\n");
	
	printf("enter your choice :");
	scanf("%d" ,&language);
	
	
	switch (language){
	
	case 1 :
		printf("\n");
		printf("press 1 for internet recharge\n");
		printf("press 2 for top-up recharge\n");
		printf("press 3 for special recharge\n\n\n");
		
		printf("enter your choice :");
		scanf("%d" ,&recharge);
		
		switch (recharge){
		
			case 1 :
				printf("you have sucessfully done internet recharge.");
			break;
			
			case 2 :
			    printf("you have sucessfully done top-up recharge.");
			break;
			
			case 3 :
		    	printf("you have sucessfully done special recharge.");
			break;
			
		    default : 
		        printf("invalid recharge choice.");
		}
		break;
	case 2 :
		printf("\n");
		printf("internet recharge ke liye 1 dabaiye\n");
		printf("top up recharge ke liye 2 dabaiye\n");
		printf("special recharge ke liye 3 dabaiye\n\n\n");
		
		printf("enter your choice :");
		scanf("%d" ,&recharge);
		
		switch (recharge){
		
			case 1 :
				printf("aapne safaltapurvak internet recharge kar liya.");
			break;
			
			case 2 :
			    printf("aapne safaltapurvak top-up recharge kar liya.");
			break;
			
			case 3 :
		    	printf("aapne safaltapurvak special recharge kar liya.");
			break;
			
		    default : 
		        printf("galat vikalp.");
		}
		break;
	case 3 :
		printf("\n");
		printf("internet recharge mate 1 dabavo\n");
		printf("top up recharge mate 2 dabavo\n");
		printf("special recharge mate 3 dabavo\n\n\n");
		
		printf("enter your choice :");
		scanf("%d" ,&recharge);
		
			switch (recharge){
		
			case 1 :
				printf("tame safaltapurvak internet recharge karyu.");
			break;
			
			case 2 :
			    printf("tame safaltapurvak top-up recharge karyu.");
			break;
			
			case 3 :
		    	printf("tme safaltapurvak special recharge karyu.");
			break;
			
		    default : 
		        printf("amany vikalp.");
		}
	break;
	}
}
