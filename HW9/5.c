#include <stdio.h>

int find_max_array(int size, int a[])
{
    int max = *a;

    for (size_t i = 1; i < size; i++)
    {
        max = (*(a+i) > max) ? *(a+i) : max;
    }
    
    return max;
}

int main()
{
    int a[4] = {773, 307, 983, 548};
    
    printf("%d", find_max_array(4, &a));

    return 0;
}