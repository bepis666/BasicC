#include <stdio.h>

int main()
{
    int arr[12], temp[4];

    for (size_t i = 0; i < 12; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < 4; i++)
    {
        temp[i] = arr[8+i];
    }
    
    for (size_t i = 0; i < 12; i++)
    {
        arr[12-i] = arr[12-(i+4)];
    }
    
    for (size_t i = 0; i < 4; i++)
    {
        arr[i] = temp[i];
    }
    
    for (size_t i = 0; i < 12; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}