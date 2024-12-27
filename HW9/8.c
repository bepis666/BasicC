#include <stdio.h>

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
    int arr[1000] = {0}, x = 0, i = 0, k = 0;

    do
    {
        scanf("%d", &x);
        if (x != 0)
        {
            *(arr+i) = x;
            i++;
        }
    } while (x != 0);

    sort_array(i, &arr);

    //printf("%d %d\n", arr[0], arr[i]);

    k = arr[0];
    for (size_t j = 0; j < i; j++)
    {
        //printf("%d ", arr[j]);
        if (*(arr+j) != k)
        {
            printf("%d ", k);
            break;
        }
        k++;
    }
    
    return 0;
}