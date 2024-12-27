#include <stdio.h>

void swap_negmax_last(int size, int a[])
{
    int max = -2147483648, j = 0;

    for (size_t i = 0; i < size; i++)
    {
        if ((*(a+i) < 0) && (max < *(a+i)))
        {
            max = *(a+i);
            j = i;
        }
    }

    printf("%d\n", max);

    if (max != -2147483648)
    {
        *(a+j) = *(a+size-1);
        *(a+size-1) = max; 
    }
}

int main()
{
    int arr[1000] = {0}, x = 0, i = 0;

    do
    {
        scanf("%d", &x);
        if (x != 0)
        {
            *(arr+i) = x;
            i++;
        }
    } while (x != 0);

    swap_negmax_last(i, &arr);

    for (size_t j = 0; j < i; j++)
    {
        printf("%d ", arr[j]);
    }
    
    return 0;
}