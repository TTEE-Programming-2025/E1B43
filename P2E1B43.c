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
	printf("�P C H O U \n");
	printf("�x T I N G \n");
	printf("�� T I \n");
	printf("**********\n");
	printf("++++++++++\n");
	printf("==========\n");
	printf("�p�p�p�p�p\n");
	
	//�K�X
	int input,attempt=0;
	printf("�п�J�K�X��!(����:���~���褸�~��)\n");
	scanf("%d",&input);
	
	while (attempt < 3) {
	printf("�п�J�K�X��!(����:���~���褸�~��)\n");
	scanf("%d",&input);
	if(input==password){
		printf("�K�X���T\n");
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
	for(;;){ 
	while(1){
    printf("---------------------------\n");
    printf("|   a.�e�X�����T����      |\n");
    printf("|   b.��ܭ��k��          |\n");
    printf("|   c.����                |\n");
    printf("---------------------------\n");
    char ch,ch1;
    printf("��J�r��\n"); 
    scanf(" %c",&ch);
    if(ch=='a'||ch=='A')
    {
    system("CLS");
    printf("�п�J�@��'a'��'n'���r��");
   
}  
  int m,o,j;
char h;
    if(ch=='a'||ch=='A'){
    	system("cls");
    	printf("��Ja��n\n");
    	fflush(stdin);
    	scanf("%c",&h);
    	while(h<'a'||h>'n'){
    		printf("����J\n");
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
    	printf("��J1��9\n");
    	scanf("%d",&bb);
     for(i=1;i<=bb;i++){
     	for(j=1;j<=bb;j++)
     	printf("%d *%d=%d\n",i,j,j*i);
     	printf("\n");
	 }
	 printf("��^�D���");
        getch();
        system("CLS");
        break;
	}
	
	if(ch=='c'||ch=='C'){
		printf("Continue? (y/n)\n");
		if(ch=='y'||ch=='Y'){
			
		}
		else if (ch == 'n' || ch == 'N') {
            printf("\n�A���I\n");
            return 0;
        } else {
            printf("\n��J���~�A�п�Jy��n\n");
        }	}
	return 0;}}}}



	

