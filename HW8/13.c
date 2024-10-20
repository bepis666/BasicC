#include <stdio.h>

int main()
{
    int arr[10], temp[10], count = 0;

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        if (((arr[i]/10) % 10) == 0)
        {
            temp[count] = arr[i];
            count++;
        }
        
    }
    
    for (size_t i = 0; i < count; i++)
    {
        printf("%d ", temp[i]);
    }
    
    return 0;
}