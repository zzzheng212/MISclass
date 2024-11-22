#include <stdio.h>

int main(void){
    int row,column;
    int count = 1;//count to nine
    printf("Plese input the row:");
    scanf("%d",&row);
    printf("Plese input the column:");
    scanf("%d",&column);
    for(int i = 1;i<=row;i++){
        for(int j = 1;j<=column;j++){
            while(1){
                for(count = 1;count<=9;count++){
                printf("%d",count);
                }
                for(count = 9;count>=1;count--){
                printf("%d",count);
            }
            }
        }
        printf("\n");
    }
}