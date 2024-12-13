#include <stdio.h>
#define SIZE 3
int main(void){
    int num;
    char board[SIZE][SIZE] = {{1,2,3},{4,5,6},{7,8,9}};//init board from 1 to 9
    printf("Welcome to the Baseball Game!\n");
    
    for (int i = 0;i<SIZE;i++){ //print the board using int
        for(int j = 0;j < SIZE;j++){
            printf(" %d ",board[i][j]);
            if(j<SIZE - 1){
                printf("|");
            }
        }
        printf("\n");
        if(i<SIZE-1){
            printf("---+---+---\n");
        }
    }

    //main function
    printf("Enter the number of the grid you hit(1-9),or enter 0 for missed: ");
    scanf("%d",&num);
    if(num == 0){
        printf("Missed! Try again\n");
    }
    else if(num == 1){
        board[0][0]='X';
    }
    else if(num == 2){
        board[0][1]='X';
    }
    else if(num == 3){
        board[0][2]='X';
    }
    else if(num == 4){
        board[1][0]='X';
    }
    else if(num == 5){
        board[1][1]='X';
    }
    else if(num == 6){
        board[1][2]='X';
    }
    else if(num == 7){
        board[2][0]='X';
    }
    else if(num == 8){
        board[2][1]='X';
    }
    else if(num == 9){
        board[2][2]='X';
    }
    for (int i = 0;i<SIZE;i++){ //print the board using int
        for(int j = 0;j < SIZE;j++){
            printf(" %d ",board[i][j]);
            if(j<SIZE - 1){
                printf("|");
        }
        }
        printf("\n");
        if(i<SIZE-1){
            printf("---+---+---\n");
        }
    }
    printf("Enter the number of the grid you hit(1-9),or enter 0 for missed: ");
    scanf("%d",&num);
    if(num == 0){
        printf("Missed! Try again\n");
    }
    else if(num == 1){
        board[0][0]='A';
    }
    else if(num == 2){
        board[0][1]='X';
    }
    else if(num == 3){
        board[0][2]='X';
    }
    else if(num == 4){
        board[1][0]='X';
    }
    else if(num == 5){
        board[1][1]='X';
    }
    else if(num == 6){
        board[1][2]='X';
    }
    else if(num == 7){
        board[2][0]='X';
    }
    else if(num == 8){
        board[2][1]='X';
    }
    else if(num == 9){
        board[2][2]='X';
    }
    for (int i = 0;i<SIZE;i++){ //print the board using int
        for(int j = 0;j < SIZE;j++){
            printf(" %d ",board[i][j]);
            if(j<SIZE - 1){
                printf("|");
        }
        }
        printf("\n");
        if(i<SIZE-1){
            printf("---+---+---\n");
        }
    }
    printf("Enter the number of the grid you hit(1-9),or enter 0 for missed: ");
    scanf("%d",&num);
    if(num == 0){
        printf("Missed! Try again\n");
    }
    else if(num == 1){
        board[0][0]='X';
    }
    else if(num == 2){
        board[0][1]='X';
    }
    else if(num == 3){
        board[0][2]='X';
    }
    else if(num == 4){
        board[1][0]='X';
    }
    else if(num == 5){
        board[1][1]='X';
    }
    else if(num == 6){
        board[1][2]='X';
    }
    else if(num == 7){
        board[2][0]='X';
    }
    else if(num == 8){
        board[2][1]='X';
    }
    else if(num == 9){
        board[2][2]='X';
    }
    for (int i = 0;i<SIZE;i++){ //print the board using int
        for(int j = 0;j < SIZE;j++){
            printf(" %d ",board[i][j]);
            if(j<SIZE - 1){
                printf("|");
        }
        }
        printf("\n");
        if(i<SIZE-1){
            printf("---+---+---\n");
        }
    }
    printf("Enter the number of the grid you hit(1-9),or enter 0 for missed: ");
    scanf("%d",&num);
    if(num == 0){
        printf("Missed! Try again\n");
    }
    else if(num == 1){
        board[0][0]='X';
    }
    else if(num == 2){
        board[0][1]='X';
    }
    else if(num == 3){
        board[0][2]='X';
    }
    else if(num == 4){
        board[1][0]='X';
    }
    else if(num == 5){
        board[1][1]='X';
    }
    else if(num == 6){
        board[1][2]='X';
    }
    else if(num == 7){
        board[2][0]='X';
    }
    else if(num == 8){
        board[2][1]='X';
    }
    else if(num == 9){
        board[2][2]='X';
    }
    for (int i = 0;i<SIZE;i++){ //print the board using int
        for(int j = 0;j < SIZE;j++){
            printf(" %d ",board[i][j]);
            if(j<SIZE - 1){
                printf("|");
        }
        }
        printf("\n");
        if(i<SIZE-1){
            printf("---+---+---\n");
        }
    }
    printf("End of throwing\n");
    











    return 0;
}
