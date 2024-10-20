#include <stdio.h>

int main()
{
    int arr[10], sum = 0;

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        sum += (arr[i] > 0) ? arr[i] : 0;
    }
    
    
    printf("%d ", sum);
   

    return 0;
}