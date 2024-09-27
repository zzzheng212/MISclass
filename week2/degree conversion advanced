#include <stdio.h>

//攝氏轉華氏
//華氏轉攝氏
//使用者輸入1/2去決定要轉換的溫度功能
//f = (c*9/5)+32

int main(void){
    float cel;
    float faren;
    int input_num;
    /*給使用者看的提示字*/
    printf("This program converts temperature in Celsius into Fahrenheit and vice versa.\n");
    printf("Enter 1 or 2 for conversion\n");
    printf("1 Celsius to Fahrenheit\n");
    printf("2 Fahrenheit to Celsius\n");
    printf("please input a 1 or 2\n");
    scanf("%d",&input_num);//輸入一或二開始執行，決定哪種功能
    if (input_num == 1){//若是一，符合這個判斷式，執行攝氏轉華式的計算
        printf("Enter a temperature in Celsius:\n");
        scanf("%f",&cel);
        faren = ((float)cel*9)/5+32;
        printf("Fahrenfeit temperature is %.1f degree\n",faren);
    }
    else if(input_num == 2){//若是二，符合這個判斷式，執行華式轉攝氏的計算
        printf("Enter a temperature in Fahrenheit:");
        scanf("%f",&faren);
        cel = (((float)faren-32)*5)/9;
        printf("Celsius temperature is %.1f degree\n",cel);
    }
    else{//若不是1或2，則跳出程式
        printf("請輸入1或2");
    }
    return 0;
}
