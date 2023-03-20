// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the size(n) of the n x n square matrix: ");
    scanf("%d",&n);
    int inputMatrix[n][n], outputMatrix[n][n];
    printf("Enter the matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&inputMatrix[i][j]);
        }
    }
    printf("Enter the value of m: ");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(inputMatrix[i][j]==m && i!=0)
            {
                outputMatrix[i][j]=inputMatrix[i-1][j];
            }
            else
            {
                outputMatrix[i][j]=inputMatrix[i][j];
            }
        }
    }
    printf("The output matrix is: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",outputMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}	