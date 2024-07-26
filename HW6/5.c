#include <stdio.h>

int f(int);

int f(int x)
    {
        int a = 0;
        for (int i = 0; i <= x; i++)
        {
            a += i;
        }
        return a;
    }

int main ()
{
    int x;

    scanf("%d", &x);
        
    printf("%d", f(x));

    return 0;
}