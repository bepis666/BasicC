#include <stdio.h>

int main()
{
    int n, temp, count = 0;

    scanf("%d", &n);

    temp = n;
    while (temp!=0)
    {
        count++;
        temp/=10;
    }
    
    int arr[count];
    for (size_t i = 0; i < count; i++)
    {
        arr[count-(i+1)] = n%10;
        n/=10;
    }

    for (size_t j = 0; j < count; j++)
    {
        for (size_t i = 0; i < (count-1); i++)
        {
            if (arr[i+1] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    
    
    for (size_t i = 0; i < count; i++)
    {
        printf("%d", arr[i]);
    }
       
    return 0;
}