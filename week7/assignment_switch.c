#include <stdio.h>

//Äá¤óÂàµØ¤ó
//µØ¤óÂàÄá¤ó
//user input number to converse the degree
//f = (c*9/5)+32

int main(void){
    float cel;
    float faren;
    int input_num;

    printf("This program converts temperature in Celsius into Fahrenheit and vice versa.\n");
    printf("Enter 1 or 2 for conversion\n");
    printf("1 Celsius to Fahrenheit\n");
    printf("2 Fahrenheit to Celsius\n");
    printf("please input a 1 or 2\n");
    scanf("%d",&input_num);//Input 1 or 2 to start ,and decide the function

    switch(input_num){

    case 1:
        printf("Enter a temperature in Celsius:\n");
        scanf("%f",&cel);
        faren = ((float)cel*9)/5+32;
        printf("Fahrenfeit temperature is %.1f degree\n",faren);
        break;

    case 2:
        printf("Enter a temperature in Fahrenheit:");
        scanf("%f",&faren);
        cel = (((float)faren-32)*5)/9;
        printf("Celsius temperature is %.1f degree\n",cel);
        break;

    default:
        printf("%s","Incorrect letter grade entered.");
        puts("Enter 1 or 2.");
        break;

    }



}
