#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define password 2025
#define rows 9
#define cols 9

void availableseat();
void arrangeforyou();
void choosebyyourself();


//個人風格的畫面
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
	printf("周          C H O U \n");
	printf("庭          T I N G \n");
	printf("億              T I \n");
	printf("********************\n");
	printf("++++++++++++++++++++\n");
	printf("====================\n");
	printf("喵喵喵喵喵喵喵喵喵喵\n");
	
	//密碼
	int input,attempt=0;
	
	
	while (attempt < 3) {
	printf("請輸入密碼喔!(提示:今年的西元年分)\n");
	scanf("%d",&input);
	if(input==password){
		printf("密碼正確\n");
		  system("CLS");
		break; 
	} 
	else{
		attempt++;
        printf("密碼錯誤！你還剩下 %d 次機會\n",3-attempt);
	}
    if(attempt>=3){
	printf("已經使用完嘗試次數!\a\a\a\a\a\a\a\a\n");	
    return 0;
   }
    
} 	
char option,di;
do{
	printf("-----[Booking System]-----\n");
    printf("|  a. Available seats   |\n");
    printf("|  b. Arrange for you   |\n"); 
    printf("| c. Choose by yourself |\n");
    printf("|        d. Exit        |\n"); 
    printf("--------------------------\n");
    
    printf("請輸入a to d\n");
    scanf(" %c",&option);
    
    switch(option){
    	
    	case 'a' :
    	   availableseat();
    	   break;
    	   
    	case 'b':
    	   arrangeforyou();
    	   break;
    	
    	case 'c':
		   choosebyyourself();
		   break;
		
	    case 'd':
	       printf(" 'Continue? (y/n)' \n");
	       scanf(" %c",&di);
	       if(di=='y'){
	        break;
		   }
		   else if(di=='n'){
		   	printf("bye bye \n");
		   	return 0;
		   }
		   else{
		   	printf("輸入錯誤，請重新輸入\n");
		   }
		   break;
		
		default :
			printf("輸入錯誤，請重新輸入a to d \n");
	       
		}
}while(1);		
return 0;
}
