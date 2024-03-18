#include <stdio.h>

int main()
{
    int size;

    
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);

    
    int array[size][size];

    
    printf("\nEnter array's elements:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i][i]; 
    }

    
    printf("\nThe sum of diagonal elements of an Array: %d\n", sum);

    return 0;
}
