#include <stdio.h>

int main()
{
    int arr[5];
    float average = 0;

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < 5; i++)
    {
        average += (float)arr[i];
    }
    
    printf("%.3f", average/5);    

    return 0;
}