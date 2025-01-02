void matrixmultiply(size_t A_row, size_t A_col, size_t B_row, size_t B_col,
                    size_t arraya[A_row][A_col], size_t arrayb[B_row][B_col])
{
    if (A_col != B_row)
    {
        printf("Matrix multiplication is not possible. Number of columns in A must equal number of rows in B.\n");
        return;
    }

    size_t result[A_row][B_col];

    // 初始化結果矩陣為0
    for (size_t i = 0; i < A_row; i++)
    {
        for (size_t j = 0; j < B_col; j++)
        {
            result[i][j] = 0;
        }
    }

    // 矩陣乘法核心邏輯
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

    // 輸出結果矩陣
    printf("Result of Matrix Multiplication:\n");
    for (size_t i = 0; i < A_row; i++)
    {
        for (size_t j = 0; j < B_col; j++)
        {
            printf("%3zu ", result[i][j]);
        }
        printf("\n");
    }
}
