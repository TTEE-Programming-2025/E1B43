#include <stdio.h>
#include <stdlib.h>
#define password 2025
int main(void){
	printf("==========\n");
	printf("++++++++++\n");
	printf("||\n");
	printf("==========\n");
	printf("||\n");
	printf("++++++++++\n");
	printf("==========\n");
	printf("1B\n");
	printf("  ==  ==      =====\n");
	printf("  ||  ||          ||\n");
	printf("  ------      -----\n");
	printf("      ||          ||\n");
	printf("      ==      =====\n");
	printf("周 C H O U \n");
	printf("庭 T I N G \n");
	printf("億 T I \n");
	printf("**********\n");
	printf("++++++++++\n");
	printf("==========\n");
	printf("喵喵喵喵喵\n");
	
	//密碼
	int input,attempt=0;
	printf("請輸入密碼喔!(提示:今年的西元年分)\n");
	scanf("%d",&input);
	
	while (attempt < 3) {
	if(password==input){
		printf("密碼正確\n");
		break; 
	} 
	else{
		attempt++;
        printf("密碼錯誤！你還剩下 %d 次機會\n",3-attempt);
	}
    printf("已經使用完嘗試次數!\a\a\a\a\a\a\a\a\n");	
   
    system("CLS");
    fflush(stdin);
} 
	
	while(1){
    printf("---------------------------\n");
    printf("|   a.畫出直角三角形      |\n");
    printf("|   b.顯示乘法表          |\n");
    printf("|   c.結束                |\n");
    printf("---------------------------\n");
    char ch,ch1;
    printf("輸入字元\n"); 
    scanf(" %c",&ch);
    if(ch=='a'||ch=='A')
    {
    system("CLS");
    printf("請輸入一個'a'到'n'的字元");
    while(1){
        fflush(stdin);
        scanf("%c",&ch1);
        if(ch1<'a'||ch1>'n'){
        printf("輸入錯誤,請重新輸入\n");
        }
    else{
        
        printf("返回主選單");
        getch();
        system("CLS");
        break;
        }
    }
}
  int i,j,bb;
    if(ch=='b'||ch=='B')
    {
    	printf("輸入1到9\n");
    	scanf("%d",&bb);
     for(i=1;i<=bb;i++){
     	for(j=1;j<=9;j++)
     	printf("%d *%d=%d\n",i,j,j*i);
	 }
	 printf("返回主選單");
        getch();
        system("CLS");
        break;
	}
	
	if(ch=='c'||ch=='C'){
		printf("Continue? (y/n)\n");
		if(ch=='y'||ch=='Y'){
			
		}
		else if (ch == 'n' || ch == 'N') {
            printf("\n再見！\n");
            return 0;
        } else {
            printf("\n輸入錯誤，請輸入y或n\n");
        }	}
	return 0;}}



	

