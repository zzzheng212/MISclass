#include <stdio.h>

void matrixprint(size_t row, size_t col, size_t array[row][col], int *counter);
void transprint(size_t row, size_t col, size_t array[row][col]);
void matrixtranspose(size_t row, size_t col, size_t array[row][col], size_t arrayt[col][row]);
void matrixmultiply(size_t A_row, size_t A_col, size_t B_row, size_t B_col,
                    size_t arraya[A_row][A_col], size_t arrayb[B_row][B_col]);

int main(void)
{
    size_t A_row, A_col;
    size_t B_row, B_col;
    int input_num;
    int counter = 1; // to count the number in the matrix
    printf("This is a matrix program\n");
    printf("Please input matrix A's row: ");
    scanf("%zu", &A_row);
    printf("Please input matrix A's col: ");
    scanf("%zu", &A_col);
    if (A_row <= 0 || A_col <= 0) // check row & col are right or not
    {
        printf("Matrix A's input is wrong\n");
        return 1;
    }

    size_t array2dA[A_row][A_col];
    matrixprint(A_row, A_col, array2dA, &counter);

    printf("Please input matrix B's row: ");
    scanf("%zu", &B_row);
    printf("Please input matrix B's col: ");
    scanf("%zu", &B_col);
    if (B_row <= 0 || B_col <= 0)
    {
        printf("Matrix B's input is wrong.\n");
        return 1;
    }

    size_t array2dB[B_row][B_col];
    matrixprint(B_row, B_col, array2dB, &counter);

    while (1) // infinite loop
    {
        printf("\n1 is for matrix transpose\n");
        printf("2 is for matrix multiply\n");
        printf("3 is to exit program\n");
        printf("Please input a num to choose function: ");
        scanf("%d", &input_num);

        switch (input_num) // choose function
        {
        case 1:
            printf("You chose to transpose a matrix.\n");
            int choose_num;
            printf("Please input which matrix to transpose (1 for A, 2 for B): ");
            scanf("%d", &choose_num);
            if (choose_num == 1) // transpose
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
                printf("Please input correct number!\n");
            }
            break;

        case 2: // mutiply
            printf("You chose to multiply two matrices.\n");
            matrixmultiply(A_row, A_col, B_row, B_col, array2dA, array2dB);
            break;

        case 3:
            printf("Exiting program.\n");
            return 0; // exit

        default:
            printf("Invalid input. Please choose 1, 2, or 3.\n");
            break;
        }
    }

    return 0;
}

void matrixprint(size_t row, size_t col, size_t array[row][col], int *counter)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            array[i][j] = (*counter)++; // use pointer to count the number
        }
    }
    printf("Original matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3zu ", array[i][j]);
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

void matrixmultiply(size_t A_row, size_t A_col, size_t B_row, size_t B_col,
                    size_t arraya[A_row][A_col], size_t arrayb[B_row][B_col])
{
    if (A_col != B_row) // check matrix a,b can multiply
    {
        printf("Matrix multiplication is not possible. Number of columns in A must equal number of rows in B.\n");
        return;
    }

    size_t result[A_row][B_col]; // to store the multiply result

    for (size_t i = 0; i < A_row; i++) // init the result matrix
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
                result[i][j] += arraya[i][k] * arrayb[k][j]; // arow multiply bcol
            }
        }
    }

    printf("Result of Matrix Multiplication:\n"); // then print
    for (size_t i = 0; i < A_row; i++)
    {
        for (size_t j = 0; j < B_col; j++)
        {
            printf("%3zu ", result[i][j]);
        }
        printf("\n");
    }
}
