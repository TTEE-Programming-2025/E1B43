#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#define password 2025
#define rows 9
#define cols 9

int seat[rows][cols] = {0};  // 0 空位 1 已選 2 建議
int initialized = 0;

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
		   	printf("輸入錯誤，請重新輸入\n");
		   }
		   break;
		
		default :
			printf("輸入錯誤，請重新輸入a to d \n");
	       
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
    printf("\n請按任意鍵返回主選單...\n");
    getch();
    system("CLS");
}
void arrangeforyou() {
    int num,i,j,k,found=0;
    printf("請輸入需要的座位數量(1~4): ");
    scanf("%d",&num);
    if (num<1||num>4) {
        printf("輸入錯誤，請輸入1到4\n");
        return;
    }
    for (i=0;i<rows;i++)
        for (j=0;j<cols;j++)
            if (seat[i][j]==2)seat[i][j]=0;

    for(i=0;i<rows&&!found;i++){
        for(j=0;j<=cols-num&&!found;j++){
            int ok=1;
            for (k=0;k<num;k++){
                if(seat[i][j + k]!=0){
                    ok=0;
                    break;
                }
            }
            if(ok){
                for(k=0;k<num;k++)seat[i][j+k]=2;
                found=1;
            }
        }
    }

    if (!found && num == 4) {
        for (i = 0; i < rows - 1 && !found; i++) {
            for (j = 0; j < cols - 1 && !found; j++) {
                if (seat[i][j] == 0 && seat[i+1][j] == 0 &&
                    seat[i][j+1] == 0 && seat[i+1][j+1] == 0) {
                    seat[i][j] = seat[i+1][j] = seat[i][j+1] = seat[i+1][j+1] = 2;
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("目前找不到適合的座位組合\n");
        return;
    }

    availableseat();
    char confirm;
    printf("是否接受建議座位？(y/n)：");
    scanf(" %c",&confirm);

    if(confirm=='y'){
        for(i=0;i<rows;i++)
            for(j=0;j<cols;j++)
                if(seat[i][j]==2)seat[i][j]=1;
        printf("已完成座位安排！\n");
    }else{
        for(i=0;i<rows;i++)
            for(j=0;j<cols;j++)
                if(seat[i][j]==2)seat[i][j]=0;
        printf("已取消安排，返回主選單\n");
    }
}
