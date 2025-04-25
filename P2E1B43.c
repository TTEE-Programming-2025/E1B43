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
	printf("請輸入密碼喔!(提示:今年的西元年分)\n");
	scanf("%d",&input);
	if(input==password){
		printf("密碼正確\n");
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
	for(;;){ 
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
  int m,o,j;
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
	
		
	if (h>='a'&&h<='n'){
		for(m =h; m>='a';m--){
         
        for (j='a'; j <m; j++) {
		printf(" ");
        
    }
    for(o=m;o<=h;o++){
	printf("%c", o);
	}
	printf("\n");
    
		}
	}
	
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
	return 0;}}}}



	

