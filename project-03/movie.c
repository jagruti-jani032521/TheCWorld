#include <stdio.h>

main()
{
	int date,month,year,catagories,type,time,count,food,choice,period;
	float tickit_price,food_price,final_bill;
	
	printf("          MOVIE TICKIT          \n\n\n");
	
	
	printf("enter the date :");
	scanf("%d" ,&date);
	printf("enter the month :");
	scanf("%d" ,&month);
	printf("enter the year :");
	scanf("%d" ,&year);
	
	printf("\n");
	printf("press 1 for HOLLYWOOD\n");
	printf("press 2 for BOLLYWOOD\n");
	printf("press 3 for TOLLYWOOD\n");
	printf("press 4 for DOLLYWOOD\n\n\n");
	
	printf("enter your choice :");
	scanf("%d" ,&catagories);
	printf("\n");
	
	switch (catagories){
		
	case 1:
			
		printf("\n");
		printf("press 1 for Thriller Tales Type \n");
	    printf("press 2 for Comedy Carnival Type\n");
		printf("press 3 for Romance Type\n");
		printf("press 4 for Inspirational Type \n");
		printf("press 5 for Kids Type\n");
		printf("press 6 for Action Type\n");
		printf("press 7 for Crime & Suspence Type\n");
        printf("press 8 for Anime Type\n");
		printf("press 9 for Mythology Type\n");
		printf("press 10 for Biopic Type\n\n\n");
		
		printf("enter your choice :");
		scanf("%d" ,&type);
		
			switch (type){
		
			case 1 :
				printf("you are sucessfully reached Thriller Tales section.\n\n");
				printf("1.The Silence of the Lambs (1991)\n");
			    printf("2.Se7en (1995)\n");
				printf("3.Gone Girl (2014)\n");
				printf("4.Inception (2010)\n");
				printf("5.The Departed (2006)\n");
				printf("\n\n");
				
				printf("enter your choice :");
				scanf("%d" ,&choice);
				
				 switch (choice){
				 	
				 case 1 :
				 	printf("you are sucessfully selected movie 1.");
				 	printf("press 1 for morning time");
				 	peintf("press 2 for afternoon time");
				 	printf("press 3 for evening time");
				 	printf("press 4 for night time");
				 	
				 	printf("enter your choice");
				 	scanf("%d" ,&period);
				 	
				 	switch (period){
				 		
				 		case 1 :
				 			printf("there are two show available in the morning");
				 			printf("press 1 for 9 AM show ");
				 			printf("press 2 for 10:30 AM show");
				 			
				 			printf("enter your choice");
				 			scanf("&d" ,&time);
					 }
				 }
				
			break;
			
			case 2 :
			    printf("you are sucessfully reached Comedy Carnival section.");
			break;
			
			case 3 :
		    	printf("you are sucessfully reached Romance section.");
			break;
			
			case 4 :
				printf("you are sucessfully reached Inspirational section.");
			break;
			
			case 5 :
			    printf("you are sucessfully reached Kids section.");
			break;
			
			case 6 :
		    	printf("you are sucessfully reached Action section.");
			break;
			case 7 :
				printf("you are sucessfully reached Crime & Suspence section.");
			break;
			
			case 8 :
			    printf("you are sucessfully reached Anime section.");
			break;
			
			case 9 :
		    	printf("you are sucessfully reached Mythology section.");
			break;
			
			case 10 :
				printf("you are sucessfully reached at Biopic section.");
			break;
			
		    default : 
		        printf("invalid choice.");
		}
		break;
	
    case 2 :
			
		printf("\n");
		printf("press 1 for Thriller Tales Type \n");
	    printf("press 2 for Comedy Carnival Type\n");
		printf("press 3 for Romance Type\n");
		printf("press 4 for Inspirational Type \n");
		printf("press 5 for Kids Type\n");
		printf("press 6 for Action Type\n");
		printf("press 7 for Crime & Suspence Type\n");
        printf("press 8 for Anime Type\n");
		printf("press 9 for Mythology Type\n");
		printf("press 10 for Biopic Type\n\n\n");
		
		printf("enter your choice :");
		scanf("%d" ,&type);
		
			switch (type){
		
			case 1 :
				printf("you are sucessfully reached Thriller Tales section.");
			break;
			
			case 2 :
			    printf("you are sucessfully reached Comedy Carnival section.");
			break;
			
			case 3 :
		    	printf("you are sucessfully reached Romance section.");
			break;
			
			case 4 :
				printf("you are sucessfully reached Inspirational section.");
			break;
			
			case 5 :
			    printf("you are sucessfully reached Kids section.");
			break;
			
			case 6 :
		    	printf("you are sucessfully reached Action section.");
			break;
			case 7 :
				printf("you are sucessfully reached Crime & Suspence section.");
			break;
			
			case 8 :
			    printf("you are sucessfully reached Anime section.");
			break;
			
			case 9 :
		    	printf("you are sucessfully reached Mythology section.");
			break;
			
			case 10 :
				printf("you are sucessfully reached at Biopic section.");
			break;
			
		    default : 
		        printf("invalid choice.");
		}
		break;
		
		case 3 :
			
		printf("\n");
		printf("press 1 for Thriller Tales Type \n");
	    printf("press 2 for Comedy Carnival Type\n");
		printf("press 3 for Romance Type\n");
		printf("press 4 for Inspirational Type \n");
		printf("press 5 for Kids Type\n");
		printf("press 6 for Action Type\n");
		printf("press 7 for Crime & Suspence Type\n");
        printf("press 8 for Anime Type\n");
		printf("press 9 for Mythology Type\n");
		printf("press 10 for Biopic Type\n\n\n");
		
		printf("enter your choice :");
		scanf("%d" ,&type);
		
			switch (type){
		
			case 1 :
				printf("you are sucessfully reached Thriller Tales section.");
			break;
			
			case 2 :
			    printf("you are sucessfully reached Comedy Carnival section.");
			break;
			
			case 3 :
		    	printf("you are sucessfully reached Romance section.");
			break;
			
			case 4 :
				printf("you are sucessfully reached Inspirational section.");
			break;
			
			case 5 :
			    printf("you are sucessfully reached Kids section.");
			break;
			
			case 6 :
		    	printf("you are sucessfully reached Action section.");
			break;
			case 7 :
				printf("you are sucessfully reached Crime & Suspence section.");
			break;
			
			case 8 :
			    printf("you are sucessfully reached Anime section.");
			break;
			
			case 9 :
		    	printf("you are sucessfully reached Mythology section.");
			break;
			
			case 10 :
				printf("you are sucessfully reached at Biopic section.");
			break;
			
		    default : 
		        printf("invalid choice.");
		}
		break;
	
	case 4 :
			
		printf("\n");
		printf("press 1 for Thriller Tales Type \n");
	    printf("press 2 for Comedy Carnival Type\n");
		printf("press 3 for Romance Type\n");
		printf("press 4 for Inspirational Type \n");
		printf("press 5 for Kids Type\n");
		printf("press 6 for Action Type\n");
		printf("press 7 for Crime & Suspence Type\n");
        printf("press 8 for Anime Type\n");
		printf("press 9 for Mythology Type\n");
		printf("press 10 for Biopic Type\n\n\n");
		
		printf("enter your choice :");
		scanf("%d" ,&type);
		
			switch (type){
		
			case 1 :
				printf("you are sucessfully reached Thriller Tales section.");
			break;
			
			case 2 :
			    printf("you are sucessfully reached Comedy Carnival section.");
			break;
			
			case 3 :
		    	printf("you are sucessfully reached Romance section.");
			break;
			
			case 4 :
				printf("you are sucessfully reached Inspirational section.");
			break;
			
			case 5 :
			    printf("you are sucessfully reached Kids section.");
			break;
			
			case 6 :
		    	printf("you are sucessfully reached Action section.");
			break;
			case 7 :
				printf("you are sucessfully reached Crime & Suspence section.");
			break;
			
			case 8 :
			    printf("you are sucessfully reached Anime section.");
			break;
			
			case 9 :
		    	printf("you are sucessfully reached Mythology section.");
			break;
			
			case 10 :
				printf("you are sucessfully reached at Biopic section.");
			break;
			
		    default : 
		        printf("invalid choice.");
		}
		break;
	

	

	}
}
