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


//�ӤH���檺�e��
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
	printf("�P          C H O U \n");
	printf("�x          T I N G \n");
	printf("��              T I \n");
	printf("********************\n");
	printf("++++++++++++++++++++\n");
	printf("====================\n");
	printf("�p�p�p�p�p�p�p�p�p�p\n");
	
	//�K�X
	int input,attempt=0;
	
	
	while (attempt < 3) {
	printf("�п�J�K�X��!(����:���~���褸�~��)\n");
	scanf("%d",&input);
	if(input==password){
		printf("�K�X���T\n");
		  system("CLS");
		break; 
	} 
	else{
		attempt++;
        printf("�K�X���~�I�A�ٳѤU %d �����|\n",3-attempt);
	}
    if(attempt>=3){
	printf("�w�g�ϥΧ����զ���!\a\a\a\a\a\a\a\a\n");	
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
    
    printf("�п�Ja to d\n");
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
		   	printf("��J���~�A�Э��s��J\n");
		   }
		   break;
		
		default :
			printf("��J���~�A�Э��s��Ja to d \n");
	       
		}
}while(1);		
return 0;
}
