#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 順便練習2D sort，可以先全部取出來然後SORT
void init1Darray(int size, int a[]);
void print1Darray(int size, int a[]);

void init2Darray(int row, int col, int a[row][col]);
void randonmizedsquare(int row, int col, int a[row][col]);
void print2darray(int row, int col, int a[row][col]);

int main(void)
{
    int size;
    int row, col;
    int array[size];
    srand(time(NULL));
    printf("please input the size of 1D array(smaller or equal to 5): ");
    scanf("%d", &size);
    init1Darray(size, array);
    print1Darray(size, array);
    printf("input row: ");
    scanf("%d", &row);
    printf("input column: ");
    scanf("%d", &col);

    int array2d[row][col];
    int array2drandom[row][col];
    init2Darray(row, col, array2d);
    randonmizedsquare(row, col, array2drandom);
    print2darray(row, col, array2d);
    printf(" \n Randomize 2D array:\n");
    print2darray(row, col, array2drandom);
}
void init1Darray(int size, int a[])
{
    for (int i = 0; i < size; i++)
    {
        a[i] = 0;
    }

} // end of initial array
void print1Darray(int size, int a[])
{
    for (int j = 0; j < size; j++)
    {
        printf("%2d", a[j]);
    }
    printf("\n");
}
void init2Darray(int row, int col, int a[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            a[i][j] = 0;
        }
    }
}
void randonmizedsquare(int row, int col, int a[row][col])
{
    int max = 99;
    int min = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            a[i][j] = (rand() % (max - min + 1) + min);
        }
    }
}
void print2darray(int row, int col, int a[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}
