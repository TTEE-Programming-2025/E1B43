#include <stdio.h>
#include <stdlib.h>
#include <conio.h>  

#define PASSWORD 2024  

int main(void) {
    int inputPassword;
    int userinput;        
    
    //在螢幕上出現個人風格的畫面(至少 20 行)。 
    for (int i = 0; i < 20; i++) {
        printf("* * * * * * * * * * * * * * * * * * *\n");
    }
    //使用者按鍵後清除螢幕進入步驟 2 
    printf("\n按任意鍵進入下一步...\n");
    getch();  // 等待輸入
    system("cls");  // 清除螢幕 
    
    /*出現提示句並要求使用者輸入 4 個數字的密碼。若輸入正確，則出現歡迎訊息，並
進入步驟 3。若是錯誤，則顯示警告訊息並結束程式。密碼值預設 2024。 */ 
    printf("請輸入 4 位數密碼: ");
    scanf("%d", &inputPassword);
    //步驟 3 
    if (inputPassword == PASSWORD) {
        printf("\n歡迎進入系統！\n");
        printf("-------------------------------\n");
        printf("|  'A'...'Z' : Uppercase       |\n");
        printf("|  'a'...'z' : Lowercase       |\n");
        printf("|  '0'...'9' : Digit           |\n");
        printf("|  Otherwise  : Your name      |\n");
        printf("-------------------------------\n");
        
        printf("請輸入一個字元: ");
        scanf(" %c", &userinput);
       //步驟 4 
        if (userinput >= 'A' && userinput <= 'Z') {
            printf("\n輸入的是大寫字母。\n");
        } else if (userinput>='a' && userinput<='z') {
            printf("\n輸入的是小寫字母。\n");
        } else if (userinput>='0' && userinput<='9') {
            printf("\n您輸入的是數字。\n");
        } else {
            printf("\nE1B43 周庭億！\n");}
        
    } else {
        printf("\a\n密碼錯誤！程式結束。\n");}
        //步驟 5 
       printf("這次的 C 語言練習讓我熟悉了基本的輸入、輸出、條件判斷，並學會使用 system(\"cls\") 清除螢幕，讓選單更清楚。\n");
       printf("我覺得最有趣的是選單，根據使用者輸入的字元分類，讓程式更有互動性。\n");
       printf("這次練習很實用，讓我更有信心寫 C 程式，之後想嘗試更進階的功能！\n");
        return 0;
    }
