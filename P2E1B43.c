#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define password 2025

//個人風格的畫面
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
	 //清除螢幕，螢幕出現主選單
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
   
}  
//使用者若輸入‘A’或‘a’，根據輸入字元顯現一直角三角形 
  int m,o,u;
char h;
    if(ch=='a'||ch=='A'){
    	system("cls");
    	printf("輸入a到n\n");
    	fflush(stdin);
    	scanf("%c",&h);
    	while(h<'a'||h>'n'){
    		printf("重輸入\n");
    		fflush(stdin);
			scanf("%c",&h); 
		}
	}
		
	if (h>='a'&&h<='n'){
		for(m =h; m>='a';m--){
         
        for (u='a'; u <m; u++) {
		printf(" ");
        
    }
    for(o=m;o<=h;o++){
	printf("%c", o);
	}
	printf("\n");
    
		}
	}
	/*使用者若輸入‘B’或‘b’， 產生 1*1 至
n*n 的乘法表*/
  int i,j,bb;
    if(ch=='b'||ch=='B')
    {
    	printf("輸入1到9\n");
    	scanf("%d",&bb);
     for(i=1;i<=bb;i++){
     	for(j=1;j<=bb;j++)
     	printf("%d *%d=%d\n",i,j,j*i);
     	printf("\n");
	 }
        system("CLS");
        
	}
	/*使用者若輸入‘C’或‘c’問使用者是否要繼續*/ 
	if(ch=='c'||ch=='C'){
	
		printf("\nContinue? (y/n)");
		fflush(stdin);
		scanf("%c",&ch1);
		if(ch1=='y'||ch1=='Y'){
				system("CLS");
		continue;
		}
		else if (ch1 == 'n' || ch1 == 'N') {
            printf("\n再見！\n");
            break;
        } else {
            printf("\n輸入錯誤，請輸入y或n\n");
        }	}
        
	return 0;}}
	/*在寫直角三角形的時候，我遇到滿多困難的，
	加上用了太多變數，結果把自己搞得很混亂。
	後來才發現，如果用函數來處理，
	應該可以更清楚也更好整理。
	雖然這次作業真的有點挑戰，
	但我還是有努力撐過去，
	也在這過程中慢慢把它完成，
	做完的那一刻還滿有成就感的！ */ 



	

