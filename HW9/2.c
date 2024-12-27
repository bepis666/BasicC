#include <stdio.h>

void sort_even_odd(int n, int a[]);
void sort_even_odd(int n, int a[])
{
    int odd[n], even[n], odd_count = 0, even_count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if ((*(a+i) % 2) == 0)
        {
            even[even_count] = *(a+i);
            even_count++;
        }
        else
        {
            odd[odd_count] = *(a+i);
            odd_count++;
        }
    }

    for (size_t i = 0; i < even_count; i++)
    {
        *(a+i) = even[i];
    }
    
    for (size_t i = 0; i < odd_count; i++)
    {
        *(a+i+even_count) = odd[i];
    }
  
}

int main()
{
    int a[20] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    sort_even_odd(20, &a);

    for (size_t i = 0; i < 20; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;

}