#include <stdio.h>
//print number pyramid
void pyramid(int a);

int main(void){

    int height;
    printf("Please enter the height of the pyramid: ");
    scanf("%d",&height);
    printf("Pyramid pattern:\n");
    pyramid(height);


}
void pyramid(int n)
{
    if (n==0)
    {
        return;
    }
    pyramid(n-1);//recursive function
    
    for (int i=0; i<(2*n-1);i++){//print the number
        printf("%d",n);
    }
    printf("\n");
}