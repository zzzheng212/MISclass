#include <stdio.h>
#define SIZE 5

int main(void)
{

    int a[SIZE] = {2, 7, 1, 3, 5};
    puts("Data items in original order");

    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }
    for (unsigned int pass = 1; pass < SIZE; ++pass)
    {

        for (size_t i = 0; i < SIZE - 1; ++i)
        {

            if (a[i] > a[i + 1])
            {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }
    puts("\nData items in scending order");

    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", a[i]);
    }
    puts("");
}
