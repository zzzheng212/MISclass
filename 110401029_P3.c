#include<stdio.h>
#include<math.h>
//use "gcc 110401029_P3.c -o 110401029_P3.out -lm" can compile
//function prototype
void rectangle();
void diamond();
double calculate_mean(int,int,int);
double calculate_stddev(int,int,int,double);

int main(void){//main function
    int option;//choose what option
    while(1){
        printf("Please input 1-3 and (-1 to quit)\n");
        scanf("%d",&option);
        if(option == -1){
            printf("Exit the program,BYE!\n");
            break;
        }
        switch(option){
            case 1:
            case '1':
                rectangle();//call function
                break;
            case 2:
            case '2':
                diamond();//call function
                break;
            case 3:
            case '3': ;
                int num1 = 0;//init variable which are needed
                int num2 = 0;
                int num3 = 0;
                double std1,std2,std3;
                double mean,dev;
                printf("please input three number\n");
                printf("First number:");
                scanf("%d",&num1);
                printf("Second number:");
                scanf("%d",&num2);
                printf("Third number:");
                scanf("%d",&num3);
                mean = calculate_mean(num1,num2,num3);//assign the return value
                dev = sqrt(calculate_stddev(num1,num2,num3,mean));
                printf("%f\n",dev);
                std1 = (num1-mean)/dev;//calculate the value
                std2 = (num2-mean)/dev;
                std3 = (num3-mean)/dev;
                printf("z1 = %f\n",std1);
                printf("z2 = %f\n",std2);
                printf("z3 = %f\n",std3);
                break;
            default://user input wrong option
                printf("Invalid option. Please choose again.\n");
                break;
        }

    }
}

void rectangle(){//print rectangle
    int row,column;
    printf("Plese input the row:");
    scanf("%d",&row);
    printf("Plese input the column:");
    scanf("%d",&column);
    for(int i = 1;i<=row;i++){
        for(int j = 1;j<=column;j++){
            printf("* ");
        }
        printf("\n");
    }
}
void diamond(){ //print diamond
    int length;
    printf("Please input the number of length of diamond: ");
    scanf("%d",&length);
    int space = length - 1; 
    // loop till the number of length-1
    for (int i = 0; i < length-1; i++) 
    { 
        // Loop for the space before print star
        for (int j = 0; j < space; j++) 
            printf(" "); 
        // Print the i+1 stars 
        for (int j = 0; j <= i; j++) 
            printf("* "); 
        printf("\n"); 
        space--; 
    } 
    space = 0; //init the space
    //inverse of the half
    for (int i = length; i > 0; i--)  
    { 
        // Loop for the initially space  before print star
        for (int j = 0; j < space; j++) 
            printf(" "); 
        // print i stars 
        for (int j = 0; j < i; j++) 
            printf("* "); 
        printf("\n"); 
        space++; 
    } 
} 
double calculate_mean(int x1,int x2,int x3){//calculate the mean value
    double mean;//declare mean to store value
    mean = (double)(x1+x2+x3)/3;
    return mean;
}
double calculate_stddev(int x1,int x2,int x3,double mean){//calculate the standard value
    double sq1,sq2,sq3;
    double total,stdrd;
    sq1 = (x1-mean)*(x1-mean);
    sq2 = (x2-mean)*(x2-mean);
    sq3 = (x3-mean)*(x3-mean);
    total = (sq1+sq2+sq3)/3;
    return total;
}



