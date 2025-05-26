#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#define password 2025


typedef struct {
    char name[50];
    int id;
    int math, physics, english;
    float avg;
} Student;

Student students[10];
int student_count = 0;

void clear() {
    system("cls");
    }

void press() {
    printf("\n請按任意鍵返回主選單...\n");
    while (getchar() != '\n');
	 getchar();
}

void enter() {
    clear();
    int n;
    printf("請輸入學生人數（5~10）：");
    while (scanf("%d", &n) != 1 || n < 5 || n > 10) {
        while (getchar() != '\n');
        printf("錯誤！請重新輸入 5~10 的整數：");
    }

    student_count=n;
    for (int i=0;i<n;i++)
	{
        printf("\n---第 %d 位學生---\n",i+1);

        printf("姓名：");
        scanf("%s",students[i].name);

        printf("學號（6位整數）：");
        while(scanf("%d",&students[i].id)!=1||students[i].id < 100000||students[i].id>999999){
            while(getchar() != '\n');
            printf("錯誤！請重新輸入 6 位整數學號：");
        }

        printf("數學成績（0~100）：");
        while(scanf("%d",&students[i].math)!=1||students[i].math<0||students[i].math>100){
            while(getchar()!='\n');
            printf("錯誤！請重新輸入（0~100）:");
        }

        printf("物理成績（0~100）：");
        while (scanf("%d",&students[i].physics)!=1||students[i].physics<0||students[i].physics>100){
            while(getchar()!='\n');
            printf("錯誤！請重新輸入（0~100）：");
        }

        printf("英文成績（0~100):");
        while(scanf("%d", &students[i].english)!=1||students[i].english<0||students[i].english>100){
            while(getchar()!='\n');
             printf("錯誤！請重新輸入（0~100）：");
        }

        students[i].avg=(students[i].math+students[i].physics+students[i].english)/3.0f;
        
    }press();
}

void display(){
    clear();
    if (student_count==0) {
        printf("目前沒有任何學生資料。\n");
    } else {
        printf("姓名\t學號\t數學\t物理\t英文\t平均\n");
        printf("-------------------------------------------------\n");
        for (int i=0;i<student_count;i++) {
            printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",
                   students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].avg);
        }
    }
    press();
}

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
			enter();      	   
        	break;
        	   
        	case 'b':case 'B':
        	display();   
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
