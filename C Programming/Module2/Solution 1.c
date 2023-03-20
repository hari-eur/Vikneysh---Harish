#include <stdio.h>

int main()
{
    int rows=7,i,j;
    
    
    printf("\nHalf Pyramid Upright\n\n");
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }    
    
    printf("\nHalf Pyramid Inverted\n\n");
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }   
    
    printf("\nFull Pyramid Upright\n\n");
    
    for(int i=1;i<=rows;i++) 
    {
        for(int j=1;j<=rows-i;j++) 
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++) 
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nFull Pyramid Inverted\n\n");
    for(int i=rows;i>=1;i--) 
    {
        for (int j=1;j<=rows-i;j++) 
        {
            printf(" ");
        }
        for (int k=1;k<=2*i-1;k++) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
