#include <stdio.h>

void multiply();
void division();
void bmi();

void multiply() {
    int num1, num2, res;
    puts("please input two numbers");
    printf("Input first number: ");
    scanf("%d", &num1);
    printf("Input second number: ");
    scanf("%d", &num2);
    res = num1 * num2;
    printf("The answer is: %d\n", res);
}

void division(){

    int num1, num2, res;
    puts("please input two numbers");
    printf("Input first number: ");
    scanf("%d", &num1);
    printf("Input second number: ");
    scanf("%d", &num2);
    res = num1 / num2;
    printf("The answer is: %d\n", res);
}
void bmi(){
    int height,weight;
    float hei_new,result;
    printf("input your weight and height\n");
    printf("Your height: ");
    scanf("%d",&height);
    printf("Your weight: ");
    scanf("%d",&weight);
    hei_new = (float)height/100;
    result = (float)weight/(hei_new*hei_new);
    if (result<1||result>40){
        printf("Input right number!\n");
        bmi();
    }
    else{
        printf("Your BMI is %f\n",result);
    }
}

void factorial(){
    int num1;
    int total=1;
    printf("Please input your number:");
    scanf("%d",&num1);
    for(int i=1;i<=num1;i++){
        total *= i;
    }
    printf("Result is %d.",total);


}

int main() {
    int option;

    while (1) {  // infinite loop until user input 5
        printf("Choose what function (1-4, 5 to quit): ");
        scanf("%d", &option);

        if (option == 5) {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        switch (option) {
            case 1:
            case '1':
                multiply();
                break;

            case 2:
            case'2':
                division();
                break;

            case 3:
            case'3':
                bmi();
                break;
            case 4:
            case'4':
                factorial();
                break;

            default:
                printf("Invalid option. Please choose again.\n");
                break;
        }
    }

    return 0;
}
