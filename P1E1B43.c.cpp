#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  

#define PASSWORD 2024  

int main(void) {
    int inputPassword;
    int userinput;        
    
    //�b�ù��W�X�{�ӤH���檺�e��(�ܤ� 20 ��)�C 
    for (int i = 0; i < 20; i++) {
        printf("* * * * * * * * * * * * * * * * * * *\n");
    }
    //�ϥΪ̫����M���ù��i�J�B�J 2 
    printf("\n�����N��i�J�U�@�B...\n");
    getch();  // ���ݿ�J
    system("cls");  // �M���ù� 
    
    /*�X�{���ܥy�ín�D�ϥΪ̿�J 4 �ӼƦr���K�X�C�Y��J���T�A�h�X�{�w��T���A��
�i�J�B�J 3�C�Y�O���~�A�h���ĵ�i�T���õ����{���C�K�X�ȹw�] 2024�C */ 
    printf("�п�J 4 ��ƱK�X: ");
    scanf("%d", &inputPassword);
    //�B�J 3 
    if (inputPassword == PASSWORD) {
        printf("\n�w��i�J�t�ΡI\n");
        printf("-------------------------------\n");
        printf("|  'A'...'Z' : Uppercase       |\n");
        printf("|  'a'...'z' : Lowercase       |\n");
        printf("|  '0'...'9' : Digit           |\n");
        printf("|  Otherwise  : Your name      |\n");
        printf("-------------------------------\n");
        
        printf("�п�J�@�Ӧr��: ");
        scanf(" %c", &userinput);
       //�B�J 4 
        if (userinput >= 'A' && userinput <= 'Z') {
            printf("\n��J���O�j�g�r���C\n");
        } else if (userinput>='a' && userinput<='z') {
            printf("\n��J���O�p�g�r���C\n");
        } else if (userinput>='0' && userinput<='9') {
            printf("\n�z��J���O�Ʀr�C\n");
        } else {
            printf("\nE1B43 �P�x���I\n");}
        
    } else {
        printf("\a\n�K�X���~�I�{�������C\n");}
        //�B�J 5 
       printf("�o���� C �y���m�����ڼ��x�F�򥻪���J�B��X�B����P�_�A�þǷ|�ϥ� system(\"cls\") �M���ù��A������M���C\n");
       printf("��ı�o�̦��쪺�O���A�ھڨϥΪ̿�J���r�������A���{���󦳤��ʩʡC\n");
       printf("�o���m�ܹ߫�ΡA���ڧ󦳫H�߼g C �{���A����Q���է�i�����\��I\n");
        return 0;
    }
