#include <stdio.h>

unsigned long long int f(int);

unsigned long long int f(int x)
    {
        unsigned long long int a = 1;
        for (int i = 1; i < x; i++)
        {
            a *= 2;
        }
        return a;
    }

int main ()
{
    int x;

    scanf("%d", &x);
        
    printf("%llu", f(x));

    return 0;
}