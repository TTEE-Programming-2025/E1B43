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
	if(password==input){
		printf("�K�X���T\n");
		break; 
	} 
	else{
		attempt++;
        printf("�K�X���~�I�A�ٳѤU %d �����|\n",3-attempt);
	}
    printf("�w�g�ϥΧ����զ���!\a\a\a\a\a\a\a\a\n");	
   
    system("CLS");
    fflush(stdin);
} 
	
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
    while(1){
        fflush(stdin);
        scanf("%c",&ch1);
        if(ch1<'a'||ch1>'n'){
        printf("��J���~,�Э��s��J\n");
        }
    else{
        
        printf("��^�D���");
        getch();
        system("CLS");
        break;
        }
    }
}
  int i,j,bb;
    if(ch=='b'||ch=='B')
    {
    	printf("��J1��9\n");
    	scanf("%d",&bb);
     for(i=1;i<=bb;i++){
     	for(j=1;j<=9;j++)
     	printf("%d *%d=%d\n",i,j,j*i);
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
	return 0;}}



	

