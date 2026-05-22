#include <stdio.h>

main()
{
	int date,month,year,catagories,type,time,count,choice,period,ticket_price,food_price;
	float final_bill;
	
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
		printf("press 4 for Action Type\n");
		printf("press 5 for Crime & Suspence Type\n");
		
		printf("enter your choice :");
		scanf("%d" ,&type);
		
			switch (type){
		
			case 1 :
				printf("you are sucessfully reached Thriller Tales section.\n\n");
				printf("1.The Silence of the Lambs (1991)\n");
			    printf("2.Se7en (1995)\n");
				printf("3.Gone Girl (2014)\n");
				printf("4.Inception (2010)\n");
				printf("5.The Departed (2006)\n\n\n");
				
				printf("enter your choice :");
				scanf("%d" ,&choice);
				
				 switch (choice){
				 	
				 case 1 :
				 	printf("you are sucessfully selected movie 1.\n\n");
				 	printf("press 1 for morning time\n");
				 	printf("press 2 for afternoon time\n");
				 	printf("press 3 for evening time\n");
				 	printf("press 4 for night time\n\n\n");
				 	
				 	printf("enter your choice :");
				 	scanf("%d" ,&period);
				 	
				 	
				 	switch (period){
				 		
				 		case 1 :
				 			printf("there are two show available in the morning\n\n");
				 			printf("press 1 for 9 AM show \n");
				 			printf("press 2 for 10:30 AM show\n\n");
				 			printf("enter your time :");
				 			scanf("%d" ,&time);
				 			
				 				printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 							 				
				 					printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
			            break;
				 		case 2 :
				 			printf("there is only one show available in afternoon\n");
				 			printf("press 1 for confirm the show (12:45 PM)\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			
				 			   	printf("there are four type of tickets are available\n\n");
				 			    printf("press 1 for 450/- rupees ticket in A row\n");
				 		    	printf("press 2 for 350/- rupees ticket in B row\n");
				 		    	printf("press 3 for 250/- rupees ticket in C row\n");
							    printf("press 4 for 150/- rupees ticket in D row\n");
			 				    printf("press 5 for 100/- rupees ticket in E row\n\n");
			 				    printf("enter your choice : ");
			 				    scanf("%d" ,&ticket_price);
				 				
				 							 				
					 				printf("there are five food items available\n\n");
					 				printf("press 1 for french fries (120/-)\n");
					 				printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
			 						printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);

				 			
				 		break;
				 		case 3 :
				 			printf("there are three shows available at evening\n");
				 			printf("press 1 for 4:45 PM show\n");
				 			printf("press 2 for 5:30 PM show\n");
				 			printf("press 3 for 6 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			       
				 			   	printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 			    	printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
                    	break;
				 		case 4 :
				 			printf("there are two shows available at night\n");
				 			printf("press 1 for 9 PM show\n");
				 			printf("press 2 for 10 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			  
				 			    printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 					printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
				 		break;
						default :
				 			printf("invalid answer");
				 		break;
				 			printf("enter your choice");
				 			scanf("%d" ,&ticket_price);
				 			
				 			

					 }
				break;
			    case 2 : 
			        
			        printf("you are sucessfully selected movie 2.\n\n");
				 	printf("press 1 for morning time\n");
				 	printf("press 2 for afternoon time\n");
				 	printf("press 3 for evening time\n");
				 	printf("press 4 for night time\n\n\n");
				 	
				 	printf("enter your choice :");
				 	scanf("%d" ,&period);
				 	
				 	switch (period){
				 		
				 		case 1 :
				 			printf("there is only one show available in the morning\n\n");
				 			printf("press 1 for confirmation (9 AM) :");
				 			scanf("%d" ,&time);
				 			
				 				printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 							 				
				 					printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
			            break;
				 		case 2 :
				 			printf("there are two show available in afternoon\n");
				 			printf("press 1 for 12:45 PM show\n");
				 			printf("press 2 for 1 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			
				 			   	printf("there are four type of tickets are available\n\n");
				 			    printf("press 1 for 450/- rupees ticket in A row\n");
				 		    	printf("press 2 for 350/- rupees ticket in B row\n");
				 		    	printf("press 3 for 250/- rupees ticket in C row\n");
							    printf("press 4 for 150/- rupees ticket in D row\n");
			 				    printf("press 5 for 100/- rupees ticket in E row\n\n");
			 				    printf("enter your choice : ");
			 				    scanf("%d" ,&ticket_price);
				 				
				 							 				
					 				printf("there are five food items available\n\n");
					 				printf("press 1 for french fries (120/-)\n");
					 				printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
			 						printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);

				 			
				 		break;
				 		case 3 :
				 			printf("there are three shows available at evening\n");
				 			printf("press 1 for 4:45 PM show\n");
				 			printf("press 2 for 5:30 PM show\n");
				 			printf("press 3 for 6 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			       
				 			   	printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 			    	printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
                    	break;
				 		case 4 :
				 			printf("there are two shows available at night\n");
				 			printf("press 1 for 9 PM show\n");
				 			printf("press 2 for 10 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			  
				 			    printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 					printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
				 		break;
						default :
				 			printf("invalid answer");
				 		break;
				 			printf("enter your choice");
				 			scanf("%d" ,&ticket_price);
					}
					break;
					case 3 :
						
						printf("you are sucessfully selected movie 3.\n\n");
				 	    printf("press 1 for morning time\n");
				 	    printf("press 2 for afternoon time\n");
				 	    printf("press 3 for evening time\n");
				 	    printf("press 4 for night time\n\n\n");
				 	
				     	printf("enter your choice :");
				 	    scanf("%d" ,&period);
				 	
				 	switch (period){
				 		
				 		case 1 :
				 			printf("there are two show available in the morning\n\n");
				 			printf("press 1 for 9 AM show \n");
				 			printf("press 2 for 10:30 AM show\n\n");
				 			printf("enter your time :");
				 			scanf("%d" ,&time);
				 			
				 				printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 							 				
				 					printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
			            break;
				 		case 2 :
				 			printf("there is only one show available in afternoon\n");
				 			printf("press 1 for confirm the show (12:45 PM)\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			
				 			   	printf("there are four type of tickets are available\n\n");
				 			    printf("press 1 for 450/- rupees ticket in A row\n");
				 		    	printf("press 2 for 350/- rupees ticket in B row\n");
				 		    	printf("press 3 for 250/- rupees ticket in C row\n");
							    printf("press 4 for 150/- rupees ticket in D row\n");
			 				    printf("press 5 for 100/- rupees ticket in E row\n\n");
			 				    printf("enter your choice : ");
			 				    scanf("%d" ,&ticket_price);
				 				
				 							 				
					 				printf("there are five food items available\n\n");
					 				printf("press 1 for french fries (120/-)\n");
					 				printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
			 						printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);

				 			
				 		break;
				 		case 3 :
				 			printf("there are three shows available at evening\n");
				 			printf("press 1 for 4:45 PM show\n");
				 			printf("press 2 for 5:30 PM show\n");
				 			printf("press 3 for 6 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			       
				 			   	printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 			    	printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
                    	break;
				 		case 4 :
				 			printf("there are two shows available at night\n");
				 			printf("press 1 for 9 PM show\n");
				 			printf("press 2 for 10 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			  
				 			    printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 					printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
				 		break;
						default :
				 			printf("invalid answer");
				 		break;
				 			printf("enter your choice");
				 			scanf("%d" ,&ticket_price);
			
		}
				
			break;
			case 4 :
				
				 printf("you are sucessfully selected movie 4.\n\n");
				 	printf("press 1 for morning time\n");
				 	printf("press 2 for afternoon time\n");
				 	printf("press 3 for evening time\n");
				 	printf("press 4 for night time\n\n\n");
				 	
				 	printf("enter your choice :");
				 	scanf("%d" ,&period);
				 	
				 	switch (period){
				 		
				 		case 1 :
				 			printf("there is only one show available in the morning\n\n");
				 			printf("press 1 for confirmation (9 AM) :");
				 			scanf("%d" ,&time);
				 			
				 				printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 							 				
				 					printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
			            break;
				 		case 2 :
				 			printf("there are two show available in afternoon\n");
				 			printf("press 1 for 12:45 PM show\n");
				 			printf("press 2 for 1 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			
				 			   	printf("there are four type of tickets are available\n\n");
				 			    printf("press 1 for 450/- rupees ticket in A row\n");
				 		    	printf("press 2 for 350/- rupees ticket in B row\n");
				 		    	printf("press 3 for 250/- rupees ticket in C row\n");
							    printf("press 4 for 150/- rupees ticket in D row\n");
			 				    printf("press 5 for 100/- rupees ticket in E row\n\n");
			 				    printf("enter your choice : ");
			 				    scanf("%d" ,&ticket_price);
				 				
				 							 				
					 				printf("there are five food items available\n\n");
					 				printf("press 1 for french fries (120/-)\n");
					 				printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
			 						printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);

				 			
				 		break;
				 		case 3 :
				 			printf("there are three shows available at evening\n");
				 			printf("press 1 for 4:45 PM show\n");
				 			printf("press 2 for 5:30 PM show\n");
				 			printf("press 3 for 6 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			       
				 			   	printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 			    	printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
                    	break;
				 		case 4 :
				 			printf("there are two shows available at night\n");
				 			printf("press 1 for 9 PM show\n");
				 			printf("press 2 for 10 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			  
				 			    printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 					printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
				 		break;
						default :
				 			printf("invalid answer");
				 		break;
				 			printf("enter your choice");
				 			scanf("%d" ,&ticket_price);
					}
					break;
					case 5 :
						
							printf("you are sucessfully selected movie 5.\n\n");
				        	printf("press 1 for morning time\n");
				 	        printf("press 2 for afternoon time\n");
				 	        printf("press 3 for evening time\n");
				 	        printf("press 4 for night time\n\n\n");
				 	
				 	        printf("enter your choice :");
				 	        scanf("%d" ,&period);
				 	
				 	       switch (period){
				 		
				 		    case 1 :
				 			printf("there are two show available in the morning\n\n");
				 			printf("press 1 for 9 AM show \n");
				 			printf("press 2 for 10:30 AM show\n\n");
				 			printf("enter your time :");
				 			scanf("%d" ,&time);
				 			
				 				printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 							 				
				 					printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
			            break;
				 		case 2 :
				 			printf("there is only one show available in afternoon\n");
				 			printf("press 1 for confirm the show (12:45 PM)\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			
				 			   	printf("there are four type of tickets are available\n\n");
				 			    printf("press 1 for 450/- rupees ticket in A row\n");
				 		    	printf("press 2 for 350/- rupees ticket in B row\n");
				 		    	printf("press 3 for 250/- rupees ticket in C row\n");
							    printf("press 4 for 150/- rupees ticket in D row\n");
			 				    printf("press 5 for 100/- rupees ticket in E row\n\n");
			 				    printf("enter your choice : ");
			 				    scanf("%d" ,&ticket_price);
				 				
				 							 				
					 				printf("there are five food items available\n\n");
					 				printf("press 1 for french fries (120/-)\n");
					 				printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
			 						printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);

				 			
				 		break;
				 		case 3 :
				 			printf("there are three shows available at evening\n");
				 			printf("press 1 for 4:45 PM show\n");
				 			printf("press 2 for 5:30 PM show\n");
				 			printf("press 3 for 6 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			       
				 			   	printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 			    	printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
                    	break;
				 		case 4 :
				 			printf("there are two shows available at night\n");
				 			printf("press 1 for 9 PM show\n");
				 			printf("press 2 for 10 PM show\n\n");
				 			printf("enter your choice :");
				 			scanf("%d" ,&time);
				 			  
				 			    printf("there are four type of tickets are available\n\n");
				 				printf("press 1 for 450/- rupees ticket in A row\n");
				 				printf("press 2 for 350/- rupees ticket in B row\n");
				 				printf("press 3 for 250/- rupees ticket in C row\n");
				 				printf("press 4 for 150/- rupees ticket in D row\n");
				 				printf("press 5 for 100/- rupees ticket in E row\n\n");
				 				printf("enter your choice : ");
				 				scanf("%d" ,&ticket_price);
				 				
				 					printf("there are five food items available\n\n");
				 					printf("press 1 for french fries (120/-)\n");
				 					printf("press 2 for burger and coke combo (99/-)\n");
									printf("press 3 for nachos (140/- for 200gm)\n");
		 							printf("press 4 for frenkie (70/-)\n");
									printf("press 5 for samosa (120/- for 2 pc)\n\n");
				 				    printf("enter your choice : ");
				 					scanf("%d" ,&food_price);
				 		break;
						default :
				 			printf("invalid answer");
				 		break;
				 			printf("enter your choice");
				 			scanf("%d" ,&ticket_price);
				 			
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
		    	printf("you are sucessfully reached Action section.");
			break;
			case 5 :
				printf("you are sucessfully reached Crime & Suspence section.");
			break;
			
		    default : 
		        printf("invalid choice.");
		}
		break;
	
//    case 2 :
//			
//		printf("\n");
//		printf("press 1 for Thriller Tales Type \n");
//	    printf("press 2 for Comedy Carnival Type\n");
//		printf("press 3 for Romance Type\n");
//		printf("press 5 for Kids Type\n");
//		printf("press 6 for Action Type\n");
//		printf("press 7 for Crime & Suspence Type\n");
//        printf("press 8 for Anime Type\n");
//		printf("press 9 for Mythology Type\n");
//		printf("press 10 for Biopic Type\n\n\n");
//		
//		printf("enter your choice :");
//		scanf("%d" ,&type);
//		
//			switch (type){
//		
//			case 1 :
//				printf("you are sucessfully reached Thriller Tales section.");
//			break;
//			
//			case 2 :
//			    printf("you are sucessfully reached Comedy Carnival section.");
//			break;
//			
//			case 3 :
//		    	printf("you are sucessfully reached Romance section.");
//			break;
//			
//			case 4 :
//				printf("you are sucessfully reached Inspirational section.");
//			break;
//			
//			case 5 :
//			    printf("you are sucessfully reached Kids section.");
//			break;
//			
//			case 6 :
//		    	printf("you are sucessfully reached Action section.");
//			break;
//			case 7 :
//				printf("you are sucessfully reached Crime & Suspence section.");
//			break;
//			
//			case 8 :
//			    printf("you are sucessfully reached Anime section.");
//			break;
//			
//			case 9 :
//		    	printf("you are sucessfully reached Mythology section.");
//			break;
//			
//			case 10 :
//				printf("you are sucessfully reached at Biopic section.");
//			break;
//			
//		    default : 
//		        printf("invalid choice.");
//		}
//		break;
//		
//		case 3 :
//			
//		printf("\n");
//		printf("press 1 for Thriller Tales Type \n");
//	    printf("press 2 for Comedy Carnival Type\n");
//		printf("press 3 for Romance Type\n");
//		printf("press 4 for Inspirational Type \n");
//		printf("press 5 for Kids Type\n");
//		printf("press 6 for Action Type\n");
//		printf("press 7 for Crime & Suspence Type\n");
//        printf("press 8 for Anime Type\n");
//		printf("press 9 for Mythology Type\n");
//		printf("press 10 for Biopic Type\n\n\n");
//		
//		printf("enter your choice :");
//		scanf("%d" ,&type);
//		
//			switch (type){
//		
//			case 1 :
//				printf("you are sucessfully reached Thriller Tales section.");
//			break;
//			
//			case 2 :
//			    printf("you are sucessfully reached Comedy Carnival section.");
//			break;
//			
//			case 3 :
//		    	printf("you are sucessfully reached Romance section.");
//			break;
//			
//			case 4 :
//				printf("you are sucessfully reached Inspirational section.");
//			break;
//			
//			case 5 :
//			    printf("you are sucessfully reached Kids section.");
//			break;
//			
//			case 6 :
//		    	printf("you are sucessfully reached Action section.");
//			break;
//			case 7 :
//				printf("you are sucessfully reached Crime & Suspence section.");
//			break;
//			
//			case 8 :
//			    printf("you are sucessfully reached Anime section.");
//			break;
//			
//			case 9 :
//		    	printf("you are sucessfully reached Mythology section.");
//			break;
//			
//			case 10 :
//				printf("you are sucessfully reached at Biopic section.");
//			break;
//			
//		    default : 
//		        printf("invalid choice.");
//		}
//		break;
//	
//	case 4 :
//			
//		printf("\n");
//		printf("press 1 for Thriller Tales Type \n");
//	    printf("press 2 for Comedy Carnival Type\n");
//		printf("press 3 for Romance Type\n");
//		printf("press 4 for Inspirational Type \n");
//		printf("press 5 for Kids Type\n");
//		printf("press 6 for Action Type\n");
//		printf("press 7 for Crime & Suspence Type\n");
//        printf("press 8 for Anime Type\n");
//		printf("press 9 for Mythology Type\n");
//		printf("press 10 for Biopic Type\n\n\n");
//		
//		printf("enter your choice :");
//		scanf("%d" ,&type);
//		
//			switch (type){
//		
//			case 1 :
//				printf("you are sucessfully reached Thriller Tales section.");
//			break;
//			
//			case 2 :
//			    printf("you are sucessfully reached Comedy Carnival section.");
//			break;
//			
//			case 3 :
//		    	printf("you are sucessfully reached Romance section.");
//			break;
//			
//			case 4 :
//				printf("you are sucessfully reached Inspirational section.");
//			break;
//			
//			case 5 :
//			    printf("you are sucessfully reached Kids section.");
//			break;
//			
//			case 6 :
//		    	printf("you are sucessfully reached Action section.");
//			break;
//			case 7 :
//				printf("you are sucessfully reached Crime & Suspence section.");
//			break;
//			
//			case 8 :
//			    printf("you are sucessfully reached Anime section.");
//			break;
//			
//			case 9 :
//		    	printf("you are sucessfully reached Mythology section.");
//			break;
//			
//			case 10 :
//				printf("you are sucessfully reached at Biopic section.");
//			break;
//			
//		    default : 
//		        printf("invalid choice.");
//		}
//		break;
//	
//
//	
}
     }
 
