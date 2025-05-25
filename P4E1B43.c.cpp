#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#define password 2025

// Personal style screen + Password login + Menu loop
int main(void){
	printf("====================\n");
	printf("++++++++++++++++++++\n");
	printf("||||\n");
	printf("==============\n");
	printf("||||\n");
	printf("++++++++++++++++++++\n");
	printf("====================\n");
	printf("      1      B      \n");
	printf("  ==  ==      ===== \n");
	printf("  ==  ==          ||\n");
	printf("  ======      ======\n");
	printf("      ==          ||\n");
	printf("      ==      ===== \n");
	printf("CHOU       C H O U  \n");
	printf("TING       T I N G  \n");
	printf("YI             T I  \n");
	printf("********************\n");
	printf("++++++++++++++++++++\n");
	printf("====================\n");
	printf("\n");
	
	// Password login (max 3 attempts)
	int input,attempt=0;
	
	while (attempt < 3) {
	    printf("Please enter the password! (Hint: This year's year)\n");
	    scanf("%d",&input);
	    if(input==password){
		    printf("Password correct.\n");
		    system("CLS");
		    break; 
	    } 
	    else{
		    attempt++;
            printf("Incorrect password! You have %d attempts left.\n",3-attempt);
	    }
        if(attempt>=3){
	        printf("No attempts left! Access denied.\a\a\a\a\a\a\a\a\n");	
            return 0;
        }
    }
	
	
	printf("------------[Grade System]----------\n");
    printf("| a. Enter student grades           |\n");
    printf("| b. Display student grades         |\n");
    printf("| c. Search for student grades      |\n");
    printf("| d. Grade ranking                  |\n");
    printf("| e. Exit system                    |\n");
    printf("------------------------------------\n");
    
    do{
    	
    char di,option;
    
	printf("Please enter a to d:\n");
        scanf(" %c",&option);
        
        switch(option)
		{        	
        	case 'a':case 'A':  
			      	   
        	break;
        	   
        	case 'b':case 'B':
        	   
        	break;
        	
        	case 'c':case 'C':
		      
		    break;
		       
		    case 'd':case 'D':
		      
		    break;   
			
    	    case 'e':case 'E':
    	    	
    	       printf("Continue? (y/n): \n");
    	       scanf(" %c",&di);
    	       if(di=='y'){
    	            break;
		       }
		       else if(di=='n'){
			        printf("Goodbye!\n");
			        return 0;
		       }
		       else{
			        printf("Invalid input, please try again.\n");
		       }
		       break;
		    default :
			    printf("Invalid input, please enter a to d.\n");
        }
    }while(1);		
    return 0; 
	}	
