#include <stdio.h>

int f(int);

int factoria(int n)
    {
        int x = 1;
        for (int i = 1; i <= n; i++)
        {
            x *= i;
        }
        
        return x;
        
    }

int main ()
{
    int n;

    scanf("%d", &n);
    printf("%d", factoria(n));

    return 0;
}