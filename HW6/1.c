#include <stdio.h>

int module(int);

int module(int a)
    {
        if (a<0)
        {
            a *= -1;
        }
        
        return a;
    }

int main ()
{
    int a;

    scanf("%d", &a);

    printf("%d", module(a));

    return 0;
}