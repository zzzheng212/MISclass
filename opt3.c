#include<stdio.h>
#include<math.h>
double mean(int, int, int);
double std(int,int,int,double);

int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    double std1,std2,std3;
    double avg,dev;
    printf("please input three number\n");
    printf("First number:");
    scanf("%d",&num1);
    printf("Second number:");
    scanf("%d",&num2);
    printf("Third number:");
    scanf("%d",&num3);
    avg = mean(num1,num2,num3);
    dev = sqrt(std(num1,num2,num3,avg));
    std1 = (num1-avg)/dev;
    std2 = (num2-avg)/dev;
    std3 = (num3-avg)/dev;
    printf("%f\n",std1);
    printf("%f\n",std2);
    printf("%f\n",std3);
}
double mean(int x1, int x2, int x3){
    double mean;
    mean = (double)(x1+x2+x3)/3;
    return mean;
}
double std(int x1,int x2,int x3,double avg){
    double sq1,sq2,sq3;
    double total,stdrd;
    sq1 = (x1-avg)*(x1-avg);
    sq2 = (x2-avg)*(x2-avg);
    sq3 = (x3-avg)*(x3-avg);
    total = (sq1+sq2+sq3)/3;
    return total;
}
