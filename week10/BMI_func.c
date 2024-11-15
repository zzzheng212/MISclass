#include<stdio.h>

float bmi(int x, int y);

float bmi(int weight, int height){

    float hei_new,result;
    hei_new = (float)height/100;
    result = (float)weight/(hei_new*hei_new);
    return result;

}
int main(){

int wei,hei;

printf("This is a BMI clculator\n");
printf("please input your weight and height\n");
printf("Your weight(kg):");
scanf("%d",&wei);
printf("Your height(cm):");
scanf("%d",&hei);


printf("Your BMI is %f",bmi(wei,hei));

}
