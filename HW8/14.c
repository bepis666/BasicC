#include <stdio.h>

int main()
{
    int arr[10], temp[10] = {0,0,0,0,0,0,0,0,0,0}, count = 0;

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t j = 0; j < 10; j++)
    {
        for (size_t i = (j+1); i < 10; i++)
        {
            if (arr[j] == arr[i])
            {
                for (size_t n = 0; n < 10; n++)
                {
                    if (arr[j] == temp[n])
                    {
                        break;
                    }
                    if (n==9)
                    {
                        temp[count] = arr[j];
                        count++;
                    }
                }
                break;
            }
        }        
    }
    
    for (size_t i = 0; i < count; i++)
    {
        printf("%d ", temp[i]);
    }
    
    return 0;
}