#include <stdio.h>

int main()
{
    int a, b, min = 9, max = 0;

    scanf("%d", &a);

    if (a<0)
    {
        a *= -1;
    }
    else if (a==0)
    {
        printf("%d %d", min, max);
        return 0;
    }
    
    b = a;
    while (b != 0)
    {
        min = (b%10) <= min ? (b%10) : min;
        b /= 10;
    }
    
    b = a;
    while (b != 0)
    {
        max = (b%10) >= max ? (b%10) : max;
        b /= 10;
    }

    printf("%d %d", min, max);
    return 0;
}