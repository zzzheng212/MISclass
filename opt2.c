#include<stdio.h>


void printDiamond() 
{ 
    int length;
    printf("Please input the number of length of diamond: ");
    scanf("%d",&length);
    int space = length - 1; 
    
    // loop till the number of length-1
    for (int i = 0; i < length-1; i++) 
    { 
        // Loop for the space before print star
        for (int j = 0; j < space; j++) 
            printf(" "); 
        // Print the i+1 stars 
        for (int j = 0; j <= i; j++) 
            printf("* "); 
        printf("\n"); 
        space--; 
    } 
    space = 0; //init the space
    //inverse of the half
    for (int i = length; i > 0; i--)  
    { 
        // Loop for the initially space  before print star
        for (int j = 0; j < space; j++) 
            printf(" "); 
  
        // Print i stars 
        for (int j = 0; j < i; j++) 
            printf("* "); 
  
        printf("\n"); 
        space++; 
    } 
} 

int main() 
{ 
    printDiamond();
    return 0;
}
