#include <stdio.h>

int f(int);

int f(int x)
    {
        if ((x>96) && (x<123))
        {
            return x - 32;
        }
        else return x;
        
    }

int main ()
{
    int x;

    while (x != 46)
    {
        scanf("%c", &x);
        if (x != 46) printf("%c", f(x));
    }
        

    return 0;
}