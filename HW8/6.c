#include <stdio.h>

int main()
{
    int arr[12];
    float average = 0;

    for (size_t i = 0; i < 12; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < 12; i++)
    {
        average += (float)arr[i];
    }
    
    printf("%.2f", average/12);    

    return 0;
}