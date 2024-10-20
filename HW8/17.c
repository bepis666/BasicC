#include <stdio.h>

int main()
{
    int arr[10], arr_temp[10], count, arr_count = 0;

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {   
            if ((arr[i] == arr[j]) && (j != i))
            {
                break;
            }

            if (j == 9)
            {
                arr_temp[arr_count] = arr[i];
                arr_count++;
                //printf("%d %d\n", arr[i], j);
            }
        }
    }

    for (size_t i = 0; i < arr_count; i++)
    {
        printf("%d ", arr_temp[i]);
    }
       
    return 0;
}