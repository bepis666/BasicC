#include <stdio.h>

int main()
{
    int arr[10], temp;

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t j = 0; j < 9; j++)
    {
        for (size_t i = 0; i < 4; i++)
        {
            if (arr[i+1] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }

        for (size_t i = 5; i < 9; i++)
        {
            if (arr[i+1] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}