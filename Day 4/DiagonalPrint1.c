#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter the size of the array: ");
    scanf("%d %d", &a, &b)

    int arr[a][b];

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            printf("Insert the element at position %d, %d: ", i, j);
            scanf("%d", &arr[i][j]);

            if(arr[i][j] < 0)
            {
                arr[i][j] = 0;
            }
        }
    }

    printf("Diagonal elements are: ");
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < b; j++)
        {
            if(i == j)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}
