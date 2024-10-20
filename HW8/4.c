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
        for (size_t i = 0; i < 9; i++)
        {
            if (arr[i+1] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    
    printf("%d ", arr[0] + arr[1]);
   

    return 0;
}