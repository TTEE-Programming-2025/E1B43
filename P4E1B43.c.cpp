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
    printf("\n請按任意鍵返回主選單...\n");
    while (getchar() != '\n');
	 getchar();
}
// Enter student grades 
void enter() {
    clear();
    int n;
    printf("請輸入學生人數（5~10）：");
    while (scanf("%d", &n) != 1 || n < 5 || n > 10) {
        while (getchar() != '\n');
        printf("錯誤！請重新輸入 5~10 的整數：");
    }

    student_count=n;
    for (int i=0;i<n;i++)
	{
        printf("\n---第 %d 位學生---\n",i+1);

        printf("姓名：");
        scanf("%s",students[i].name);

        printf("學號（6位整數）：");
        while(scanf("%d",&students[i].id)!=1||students[i].id < 100000||students[i].id>999999){
            while(getchar() != '\n');
            printf("錯誤！請重新輸入 6 位整數學號：");
        }

        printf("數學成績（0~100）：");
        while(scanf("%d",&students[i].math)!=1||students[i].math<0||students[i].math>100){
            while(getchar()!='\n');
            printf("錯誤！請重新輸入（0~100）:");
        }

        printf("物理成績（0~100）：");
        while (scanf("%d",&students[i].physics)!=1||students[i].physics<0||students[i].physics>100){
            while(getchar()!='\n');
            printf("錯誤！請重新輸入（0~100）：");
        }

        printf("英文成績（0~100):");
        while(scanf("%d", &students[i].english)!=1||students[i].english<0||students[i].english>100){
            while(getchar()!='\n');
             printf("錯誤！請重新輸入（0~100）：");
        }

        students[i].avg=(students[i].math+students[i].physics+students[i].english)/3.0f;
        
    }press();
}
// Display student grades 
void display(){
    clear();
    if (student_count==0) {
        printf("目前沒有任何學生資料。\n");
    } else {
        printf("姓名\t學號\t數學\t物理\t英文\t平均\n");
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
        printf("目前沒有學生資料\n");
        press();
        return;
    }
    char t[50];
    printf("請輸入要查詢的學生姓名：");
    scanf("%s",t);

    int found=0;
    for (int i=0;i<student_count;i++)
	{
        if (strcmp(students[i].name, t)==0)
		{
            printf("\n姓名：%s\n學號：%d\n數學：%d\n物理：%d\n英文：%d\n平均：%.1f\n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].avg);
            found=1;
            break;
        }
    }
    
    if(!found)
        printf("找不到該學生資料！\n");

    press();
}
//  Grade ranking 
void rank() {
    clear();
    if (student_count==0) {
        printf("目前沒有學生資料\n");
        
        press();
        return;
    }

    // 冒泡排序法 
    for (int i=0;i<student_count-1;i++){
        for (int j=0;j<student_count-i-1;j++){
            if (students[j].avg<students[j+1].avg){
                Student temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
        }
    }

    printf("排名\t姓名\t學號\t平均\n");
    
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
                    printf("確定離開？(y/n)：");
                    scanf(" %c",&c);
                    if (c=='y'||c=='Y'){
                        printf("程式結束，再見！\n");
                        exit(0);
                    }else if (c=='n'||c=='N'){
                        break;
                    }else{
                        printf("無效輸入，請輸入y或n\n");
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
	
	
	// 做完這次的作業後，讓我對副函式這種寫法漸漸熟悉，也越來越喜歡用這方式撰寫。
    // 它的優點除了比較好閱讀外，還能讓整體程式架構更清楚，方便分工與除錯。
    // 每個副函式負責一個明確的功能，不但讓主程式更簡潔，也能讓我在開發時
    // 專注於一個小問題，降低出錯機率。未來若要修改某一部分功能，只需要針對
    // 對應的副函式調整即可，也提升了程式的維護性與重複使用的可能性。
    // 因此我會持續練習並善用副函式來撰寫更有結構的程式。	
