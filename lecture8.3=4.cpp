#include <stdio.h>

int main()
{
    int rows = 5;
    int cols = 5;

    int array[5][5];

    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    
    int sum = 0;
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
            {
                printf("%d ", array[i][j]);
                sum += array[i][j];
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    
    printf("\nThe sum of boundary elements of an Array: %d\n", sum);

    return 0;
}
