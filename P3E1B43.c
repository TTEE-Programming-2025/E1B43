#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#define password 2025
#define rows 9
#define cols 9

int seat[rows][cols] = {0};  // 0 �Ŧ� 1 �w�� 2 ��ĳ
int initialized = 0;

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
    	  // arrangeforyou();
    	   break;
    	
    	case 'c':
		   //choosebyyourself();
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

void initalseat() {
    srand(time(NULL));
    int count = 0;
    while(count < 10) {
        int r=rand()%rows;
        int c=rand()%cols;
        if (seat[r][c]==0){
            seat[r][c]=1;
            count++;
        }
    }
    initialized=1;
}

void availableseat(){
    if (!initialized){
        initalseat();
    }
    printf("\n   ");
    int k;
    for (k=0;k<cols;k++){
        printf("%d ",k+1);
    }
    printf("\n");
    int j,i;
    for(i=0;i<rows;i++){
        printf("%d ",rows-i);
        
        for(j=0;j<cols;j++){
            if(seat[i][j]==0)printf("- ");
            else if(seat[i][j]==1)printf("* ");
            else if(seat[i][j]==2) printf("@ ");
        }
        printf("\n");
    }
    printf("\n�Ы����N���^�D���...\n");
    getch();
    system("CLS");
}
