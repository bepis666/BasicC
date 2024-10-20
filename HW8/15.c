#include <stdio.h>

int main()
{
    int arr_plus[10], arr_minus[10], count_plus = 0, count_minus = 0, x;

    for (size_t i = 0; i < 10; i++)
    {
        scanf("%d", &x);
        if (x>0)
        {
            arr_plus[count_plus] = x;
            count_plus++;
        }
        else if (x<0)
        {
            arr_minus[count_minus] = x;
            count_minus++;
        }
    }

    for (size_t i = 0; i < count_plus; i++)
    {
        printf("%d ", arr_plus[i]);
    }

    for (size_t i = 0; i < count_minus; i++)
    {
        printf("%d ", arr_minus[i]);
    }

    return 0;
}