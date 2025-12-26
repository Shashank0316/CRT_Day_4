#include <stdio.h>

int main()
{
    int arr[2][2];

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("Insert the element at position %d, %d: ", i, j);
            scanf("%d", &arr[i][j]);

            if(arr[i][j] < 0)
            {
                arr[i][j] = 0;
            }
        }
    }

    printf("The elements in the array are:\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}