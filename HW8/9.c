#include <stdio.h>

int main()
{
    int arr[10], temp;

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    temp = arr[9];
    for (size_t i = 0; i < 9; i++)
    {
        arr[9-i] = arr[9-(i+1)];
    }
    arr[0] = temp;
    
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}