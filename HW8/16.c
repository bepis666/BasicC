#include <stdio.h>

int main()
{
    int arr[10], max, count, max_count = 0;

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        count = 0;
        for (size_t j = 1; j < 10; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            max = arr[i];
        }
    }

    printf("%d", max);    

    return 0;
}