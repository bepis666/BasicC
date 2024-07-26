#include <stdio.h>

int f(int);

int f(int x)
    {
        if ((-2 <= x) && (x < 2))
        {
            return x*x;
        }
        else if (x >= 2)
        {
            return x*x+4*x+5;
        }
        else if (x < -2)
        {
            return 4;
        }
    }

int main ()
{
    int x, max = 0;

    do
    {
        scanf("%d", &x);
        max = f(x) > max ? f(x) : max; 
    } while (x != 0);
        
    printf("%d", max);

    return 0;
}