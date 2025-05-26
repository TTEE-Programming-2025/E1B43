#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#define password 2025


typedef struct {
    char name[50];
    int id;
    int math, physics, english;
    float avg;
} Student;

Student students[10];
int student_count = 0;

void clear() {
    system("cls");
    }

void press() {
    printf("\n�Ы����N���^�D���...\n");
    while (getchar() != '\n');
	 getchar();
}
// Enter student grades 
void enter() {
    clear();
    int n;
    printf("�п�J�ǥͤH�ơ]5~10�^�G");
    while (scanf("%d", &n) != 1 || n < 5 || n > 10) {
        while (getchar() != '\n');
        printf("���~�I�Э��s��J 5~10 ����ơG");
    }

    student_count=n;
    for (int i=0;i<n;i++)
	{
        printf("\n---�� %d ��ǥ�---\n",i+1);

        printf("�m�W�G");
        scanf("%s",students[i].name);

        printf("�Ǹ��]6���ơ^�G");
        while(scanf("%d",&students[i].id)!=1||students[i].id < 100000||students[i].id>999999){
            while(getchar() != '\n');
            printf("���~�I�Э��s��J 6 ���ƾǸ��G");
        }

        printf("�ƾǦ��Z�]0~100�^�G");
        while(scanf("%d",&students[i].math)!=1||students[i].math<0||students[i].math>100){
            while(getchar()!='\n');
            printf("���~�I�Э��s��J�]0~100�^:");
        }

        printf("���z���Z�]0~100�^�G");
        while (scanf("%d",&students[i].physics)!=1||students[i].physics<0||students[i].physics>100){
            while(getchar()!='\n');
            printf("���~�I�Э��s��J�]0~100�^�G");
        }

        printf("�^�妨�Z�]0~100):");
        while(scanf("%d", &students[i].english)!=1||students[i].english<0||students[i].english>100){
            while(getchar()!='\n');
             printf("���~�I�Э��s��J�]0~100�^�G");
        }

        students[i].avg=(students[i].math+students[i].physics+students[i].english)/3.0f;
        
    }press();
}
// Display student grades 
void display(){
    clear();
    if (student_count==0) {
        printf("�ثe�S������ǥ͸�ơC\n");
    } else {
        printf("�m�W\t�Ǹ�\t�ƾ�\t���z\t�^��\t����\n");
        printf("-------------------------------------------------\n");
        for (int i=0;i<student_count;i++) {
            printf("%s\t%d\t%d\t%d\t%d\t%.1f\n",
                   students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].avg);
        }
    }
    press();
}

// Search for student grades
void search() {
    clear();
    if (student_count==0)
	{
        printf("�ثe�S���ǥ͸��\n");
        press();
        return;
    }
    char t[50];
    printf("�п�J�n�d�ߪ��ǥͩm�W�G");
    scanf("%s",t);

    int found=0;
    for (int i=0;i<student_count;i++)
	{
        if (strcmp(students[i].name, t)==0)
		{
            printf("\n�m�W�G%s\n�Ǹ��G%d\n�ƾǡG%d\n���z�G%d\n�^��G%d\n�����G%.1f\n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].avg);
            found=1;
            break;
        }
    }
    
    if(!found)
        printf("�䤣��Ӿǥ͸�ơI\n");

    press();
}
//  Grade ranking 
void rank() {
    clear();
    if (student_count==0) {
        printf("�ثe�S���ǥ͸��\n");
        
        press();
        return;
    }

    // �_�w�ƧǪk 
    for (int i=0;i<student_count-1;i++){
        for (int j=0;j<student_count-i-1;j++){
            if (students[j].avg<students[j+1].avg){
                Student temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
        }
    }

    printf("�ƦW\t�m�W\t�Ǹ�\t����\n");
    
    for (int i=0;i<student_count;i++) {
        printf("%d\t%s\t%d\t%.1f\n",i+1,students[i].name,students[i].id,students[i].avg);
    }

    press();
}
// Personal style screen + Password login + Menu loop
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
	printf("CHOU       C H O U  \n");
	printf("TING       T I N G  \n");
	printf("YI             T I  \n");
	printf("********************\n");
	printf("++++++++++++++++++++\n");
	printf("====================\n");
	printf("\n");
	

	int input,attempt=0;
	
	while (attempt < 3) {
	    printf("Please enter the password! (Hint: This year's year)\n");
	    scanf("%d",&input);
	    if(input==password){
		    printf("Password correct.\n");
		    system("CLS");
		    break; 
	    } 
	    else{
		    attempt++;
            printf("Incorrect password! You have %d attempts left.\n",3-attempt);
	    }
        if(attempt>=3){
	        printf("No attempts left! Access denied.\a\a\a\a\a\a\a\a\n");	
            return 0;
        }
    }
	
	
	printf("------------[Grade System]----------\n");
    printf("| a. Enter student grades           |\n");
    printf("| b. Display student grades         |\n");
    printf("| c. Search for student grades      |\n");
    printf("| d. Grade ranking                  |\n");
    printf("| e. Exit system                    |\n");
    printf("------------------------------------\n");
    
    do{
    	
    char di,option;
    
	printf("Please enter a to d:\n");
        scanf(" %c",&option);
        
        switch(option)
		{        	
        	case 'a':case 'A':  
			enter();      	   
        	break;
        	   
        	case 'b':case 'B':
        	display();   
        	break;
        	
        	case 'c':case 'C':
		    search();  
		    break;
		       
		    case 'd':case 'D':
		    rank(); 
		    break;   
			
    	    case 'e':case 'E':
    	    	
    	     { char c;
                do {
                    printf("�T�w���}�H(y/n)�G");
                    scanf(" %c",&c);
                    if (c=='y'||c=='Y'){
                        printf("�{�������A�A���I\n");
                        exit(0);
                    }else if (c=='n'||c=='N'){
                        break;
                    }else{
                        printf("�L�Ŀ�J�A�п�Jy��n\n");
                    }
                } while(1);
                break;
            }
		    default:
			    printf("Invalid input, please enter a to d.\n");
        }
    }while(1);		
    return 0; 
	}
	
	
	// �����o�����@�~��A���ڹ�ƨ禡�o�ؼg�k�������x�A�]�V�ӶV���w�γo�覡���g�C
    // �����u�I���F����n�\Ū�~�A�ٯ�������{���[�c��M���A��K���u�P�����C
    // �C�Ӱƨ禡�t�d�@�ө��T���\��A�������D�{����²��A�]�����ڦb�}�o��
    // �M�`��@�Ӥp���D�A���C�X�����v�C���ӭY�n�ק�Y�@�����\��A�u�ݭn�w��
    // �������ƨ禡�վ�Y�i�A�]���ɤF�{�������@�ʻP���ƨϥΪ��i��ʡC
    // �]���ڷ|����m�ߨõ��ΰƨ禡�Ӽ��g�󦳵��c���{���C	
