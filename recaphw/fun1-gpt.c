#include <stdio.h>

void matrixprint(size_t row, size_t col, size_t array[row][col]);
void matrixtranspose(size_t row, size_t col, size_t array[row][col], size_t arrayt[col][row]);
void transprint(size_t row, size_t col, size_t array[row][col]);

int main(void)
{
    size_t A_row, A_col;
    printf("This is a matrix program\n");
    printf("Please input matrix A's row: ");
    scanf("%zu", &A_row);
    printf("Please input matrix A's col: ");
    scanf("%zu", &A_col);

    size_t array2dA[A_row][A_col];
    matrixprint(A_row, A_col, array2dA);

    // 宣告轉置矩陣，注意轉置後的維度
    size_t arrayA_t[A_col][A_row];
    matrixtranspose(A_row, A_col, array2dA, arrayA_t);

    transprint(A_col, A_row, arrayA_t); // 注意：行列數需互換
}

void matrixprint(size_t row, size_t col, size_t array[row][col])
{
    int count = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            array[i][j] = count;
            count++;
        }
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3zu ", array[i][j]);
        }
        printf("\n");
    }
}

void matrixtranspose(size_t row, size_t col, size_t array[row][col], size_t arrayt[col][row])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arrayt[j][i] = array[i][j];
        }
    }
}

void transprint(size_t row, size_t col, size_t array[row][col])
{
    printf("Transposed Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3zu ", array[i][j]);
        }
        printf("\n");
    }
}
