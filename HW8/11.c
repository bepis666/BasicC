#include <stdio.h>

int lastNumber(int number);
int lastNumber(int number)
{
    while ((number/10) != 0)
    {
        number %= 10;
    }
    
    return number;
}

int main()
{
    int arr[10], temp;

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (size_t j = 0; j < 9; j++)
    {
        for (size_t i = 0; i < 9; i++)
        {
            if (lastNumber(arr[i+1]) < lastNumber(arr[i]))
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}