#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define password 2025

//�ӤH���檺�e��
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
	 //�M���ù��A�ù��X�{�D���
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
//�ϥΪ̭Y��J��A���Ρ�a���A�ھڿ�J�r����{�@�����T���� 
  int m,o,u;
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
	/*�ϥΪ̭Y��J��B���Ρ�b���A ���� 1*1 ��
n*n �����k��*/
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
        system("CLS");
        
	}
	/*�ϥΪ̭Y��J��C���Ρ�c���ݨϥΪ̬O�_�n�~��*/ 
	if(ch=='c'||ch=='C'){
	
		printf("\nContinue? (y/n)");
		fflush(stdin);
		scanf("%c",&ch1);
		if(ch1=='y'||ch1=='Y'){
				system("CLS");
		continue;
		}
		else if (ch1 == 'n' || ch1 == 'N') {
            printf("\n�A���I\n");
            break;
        } else {
            printf("\n��J���~�A�п�Jy��n\n");
        }	}
        
	return 0;}}
	/*�b�g�����T���Ϊ��ɭԡA�ڹJ�캡�h�x�����A
	�[�W�ΤF�Ӧh�ܼơA���G��ۤv�d�o�ܲV�áC
	��Ӥ~�o�{�A�p�G�Ψ�ƨӳB�z�A
	���ӥi�H��M���]��n��z�C
	���M�o���@�~�u�����I�D�ԡA
	�����٬O���V�O���L�h�A
	�]�b�o�L�{���C�C�⥦�����A
	���������@���ٺ������N�P���I */ 



	

