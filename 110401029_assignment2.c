#include <stdio.h>
#include <stdlib.h>
#include <time.h> //to produce different number
int main()
{
    int size;
    int max = 99; // random number from 1 to 99
    int min = 1;
    srand(time(NULL)); // each time can produce different number
    printf("please input the size of matrix(smaller or equal to 10): ");
    scanf("%d", &size);
    puts("");
    int arr[size][size]; // this matrix init needs to put after declare size
    int rotat[size][size];
    for (int i = 0; i < size; i++) // init all number to 0
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = 0;
        }
    }
    for (int i = 0; i < size; i++) // print the initial matrix
    {
        for (int j = 0; j < size; j++)
        {
            printf("%2d", arr[i][j]);
        }
        printf("\n");
    }
    // randonmize the number of the matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            arr[i][j] = (rand() % (max - min + 1) + min); // to restrict number between 1-99
        }
    }
    printf("\nRandonmized square:\n");
    puts("");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    // rotate the matrix 90 degree
    printf("Square rotated 90 degree\n");
    puts("");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            rotat[j][size - 1 - i] = arr[i][j]; // rotate function
        }
    }
    for (int i = 0; i < size; i++) // print
    {
        for (int j = 0; j < size; j++)
        {
            printf("%3d", rotat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
