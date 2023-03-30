#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i, sum = 0;
    int *arr;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    printf("Enter %d values for the array:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) 
    {
        sum += arr[i];
    }

    printf("The sum of the values in the array is: %d\n", sum);

    free(arr);

    return 0;
}
