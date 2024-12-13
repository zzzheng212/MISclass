#include<stdio.h>

#define SIZE 5

int main(void){

    int  myarray[SIZE]={0};

    for(size_t i =0 ;i<5;i++){
        printf("Enter a integer %lu:",i+1);
        scanf("%d",&myarray[i]);

    }
    printf("%s%13s\n","Element","Value");

    for(size_t i=0;i<5;++i){
        printf("%7u%13d\n",i,myarray[i]);
    }


}
