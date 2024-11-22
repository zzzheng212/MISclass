#include<stdio.h>

void multiply();
//float division(int arg_nom,int arg_deno);




void multiply(){

    int num1,num2,res;

    puts("please input two number");
    printf("Input first number:");
    scanf("%d",&num1);
    printf("Input second number:");
    scanf("%d",&num2);
    res = num1*num2;
    printf("The answer is: %d",res);
    return;
}


int main(){


    int option;

    printf("Choose what function(1-5):");
    scanf("%d",&option);

    while(option != -1){
        switch(option){

        case '1':
        case 1:
            multiply();
            break;

        }
    }



}



















