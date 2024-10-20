#include <stdio.h>

int main()
{
    int arr[12], temp;

    for (size_t i = 0; i < 12; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[3-i];
        arr[3-i] = temp;
    
        temp = arr[i+4];
        arr[i+4] = arr[7-i];
        arr[7-i] = temp;

        temp = arr[i+8];
        arr[i+8] = arr[11-i];
        arr[11-i] = temp;
    }
    
    for (size_t i = 0; i < 12; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}