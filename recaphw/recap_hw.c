#include <stdio.h>

void matrixprint(size_t row, size_t col, size_t array[row][col]);
void transprint(size_t row, size_t col, size_t array[row][col]);
void matrixtranspose(size_t row, size_t col, size_t array[row][col], size_t arrayt[col][row]);
void matrixmultiply(size_t A_row, size_t A_col, size_t B_row, size_t B_col,
                    size_t arraya[A_row][A_col], size_t arrayb[B_row][B_col]);

int main(void)
{
    size_t A_row, A_col;
    size_t B_row, B_col;
    int input_num; // for choosing the function
    // init the matrix
    printf("This is a matrix program\n");
    // matrix A
    printf("Please input matrix A's row: ");
    scanf("%d", &A_row);
    printf("Please input matrix A's col: ");
    scanf("%d", &A_col);
    size_t array2dA[A_row][A_col];
    matrixprint(A_row, A_col, array2dA);
    // Matrix B
    printf("Please input matrix B's row: ");
    scanf("%d", &B_row);
    printf("Please input matrix B's col: ");
    scanf("%d", &B_col);
    size_t array2dB[B_row][B_col];
    matrixprint(B_row, B_col, array2dB);
    // program start
    printf("1 is for matrix transpose\n");
    printf("2 is for matrix multiply\n");
    printf("3 is to exit program\n");
    printf("Please input a num to choose function: ");
    scanf("%d", &input_num);
    switch (input_num)
    {
    case 1:
    case '1':
        int choose_num;
        printf("please input which matrix to transpose (1 for A, 2 for B): ");
        scanf("%d", &choose_num);
        if (choose_num == 1)
        {
            size_t arrayA_t[A_col][A_row];
            matrixtranspose(A_row, A_col, array2dA, arrayA_t);
            transprint(A_col, A_row, arrayA_t);
        }
        else if (choose_num == 2)
        {
            size_t arrayB_t[B_col][B_row];
            matrixtranspose(B_row, B_col, array2dB, arrayB_t);
            transprint(B_col, B_row, arrayB_t);
        }
        else
        {
            printf("please input correct number!\n");
        }
        break;
    case 2:
    case '2':
        matrixmultiply(A_row, A_col, B_row, B_col, array2dA, array2dB);
        break;
    case 3:
    case '3':
        printf("Exiting program.\n");
        break;

    default:
        printf("%s", "Incorrect letter grade entered.");
        puts("Enter 1 or 2 or 3.");
        break;
    }
    return 0;
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
    printf("Original matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d ", array[i][j]);
        }
        printf("\n");
    }
}
void transprint(size_t row, size_t col, size_t array[row][col])
{
    printf("Transposed Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d ", array[i][j]);
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
void matrixmultiply(size_t A_row, size_t A_col, size_t B_row, size_t B_col,
                    size_t arraya[A_row][A_col], size_t arrayb[B_row][B_col])
{
    if (A_col != B_row)
    {
        printf("Matrix multiplication is not possible. Number of columns in A must equal number of rows in B.\n");
        return;
    }

    size_t result[A_row][B_col];

    for (size_t i = 0; i < A_row; i++)
    {
        for (size_t j = 0; j < B_col; j++)
        {
            result[i][j] = 0;
        }
    }

    for (size_t i = 0; i < A_row; i++)
    {
        for (size_t j = 0; j < B_col; j++)
        {
            for (size_t k = 0; k < A_col; k++)
            {
                result[i][j] += arraya[i][k] * arrayb[k][j];
            }
        }
    }

    printf("Result of Matrix Multiplication:\n");
    for (size_t i = 0; i < A_row; i++)
    {
        for (size_t j = 0; j < B_col; j++)
        {
            printf("%3d ", result[i][j]);
        }
        printf("\n");
    }
}