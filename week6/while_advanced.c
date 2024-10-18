#include<stdio.h>

//students average grade calculator
//user input how many grades want to compute

int main(void){


    int stu_num,grade,total;
    float avg;
    int counter = 0;//init counter to 0

    printf("This is a grade calculator!\n");
    printf("Input the number of students you want to calculate:");
    scanf("%d",&stu_num);

    if(stu_num>1){
        printf("Input %d students grade!\n",stu_num);


        while(counter < stu_num){//true then execute subprocess
        scanf("%d",&grade);

        if(grade>100||grade<0){//|| is or
            printf("Input valid number!\n");//user input invalid number
        }else{
            total += grade;
            counter++;
        }
        }
        avg = (float)total/stu_num;
    printf("student average grade is %.2f ",avg);

    }else{//user input invalid number
        printf("please input the number greater than 0");
    }




}
















