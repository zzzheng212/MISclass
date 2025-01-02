#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print1Darray(int size, int a[]);
void init2Darray(int row, int col, int a[row][col]);
void print2darray(int row, int col, int a[row][col]);
void randonmizedsquare(int row, int col, int a[row][col]);
void sort(int row, int col, int total, int a[row][col], int b[total], int c[row][col]);

int main()
{
    srand(time(NULL));
    int row, col;
    printf("input row: ");
    scanf("%d", &row);
    printf("input column: ");
    scanf("%d", &col);

    int array2d[row][col];
    int array2drandom[row][col];
    int sort2darray[row][col];
    init2Darray(row, col, array2d);
    print2darray(row, col, array2d);
    randonmizedsquare(row, col, array2drandom);
    print2darray(row, col, array2drandom);
    int tot = row * col;
    int sortarray[tot];
    sort(row, col, tot, array2drandom, sortarray, sort2darray);
    // print1Darray(tot, sortarray);
    printf("\nsorted 2D array:\n");
    print2darray(row, col, sort2darray);
    return 0;
}
void print1Darray(int size, int a[])
{
    for (int j = 0; j < size; j++)
    {
        printf("%3d", a[j]);
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
void sort(int row, int col, int total, int a[row][col], int b[total], int c[row][col]) // bubble sort
{
    int counter = 0;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            b[counter] = a[i][j];
            counter++;
        }
    }
    for (unsigned int pass = 1; pass < total; ++pass) // sorting
    {
        for (size_t k = 0; k < total - 1; ++k)
        {
            if (b[k] > b[k + 1])
            {
                int hold = b[k];
                b[k] = b[k + 1];
                b[k + 1] = hold;
            }
        }
    }
    // assign value again
    int counter_2 = 0;
    for (size_t i2 = 0; i2 < row; i2++)
    {
        for (size_t j2 = 0; j2 < col; j2++)
        {
            c[i2][j2] = b[counter_2];
            counter_2++;
        }
    }
}