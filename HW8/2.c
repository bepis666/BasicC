#include <stdio.h>

int main()
{
    int arr[5];
    int min = 2147483647;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        min = (min<arr[i]) ? min : arr[i];
    }
    
    printf("%d", min);    

    return 0;
}