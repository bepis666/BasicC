#include <stdio.h>

int main()
{
    int arr[10], temp;

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < 3; i++)
    {
        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }

    for (size_t i = 0; i < 3; i++)
    {
        temp = arr[i+5];
        arr[i+5] = arr[9-i];
        arr[9-i] = temp;
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}