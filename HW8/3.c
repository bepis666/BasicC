#include <stdio.h>

int main()
{
    int arr[10];
    int min, max, n_min = 1, n_max = 1;

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (size_t i = 0; i < 10; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
            n_min = i+1;
        }
        if (max<arr[i])
        {
            max = arr[i];
            n_max = i+1;
        }
    }
    
    printf("%d %d %d %d", n_max, max, n_min, min);    

    return 0;
}