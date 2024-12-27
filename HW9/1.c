#include <stdio.h>

void sort_array(int size, int a[]);
void sort_array(int size, int a[])
{
    int temp;

    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < size-1; j++)
        {
            if (*(a+j) > *(a+j+1))
            {
                temp = *(a+j+1);
                *(a+j+1) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
}

int main()
{
    int a[20] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};

    sort_array(20, &a);

    for (size_t i = 0; i < 20; i++)
    {
        printf("%d ", a[i]);
    }
    

    return 0;

}