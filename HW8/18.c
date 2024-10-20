#include <stdio.h>

int main()
{
    int arr[8] = {0,0,0,0,0,0,0,0}, n;

    scanf("%d", &n);

    for (size_t i = 2; i <= n; i++)
    {
        for (size_t j = 2; j < 10; j++)
        {
            if ((i%j)==0)
            {
                arr[j-2]++;
            }
        }
    }
    

    for (size_t i = 0; i < 8; i++)
    {
        printf("%d %d\n", i+2, arr[i]);
    }
       
    return 0;
}