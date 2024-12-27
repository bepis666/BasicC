#include <stdio.h>

int is_two_same(int size, int a[])
{
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = i+1; j < (size); j++)
        {
            if (*(a+i) == *(a+j))
            {
                return 1;
            }
        }
    }
    
    return 0;
}

int main()
{
    int a[4] = {773, 307, 983, 307};
    
    printf("%d", is_two_same(4, &a));

    return 0;
}