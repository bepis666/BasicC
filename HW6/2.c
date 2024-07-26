#include <stdio.h>

int power(int, int);

int power(int n, int p)
    {
        int a = n;

        if (p != 0)
        {
            for (int i = 1; i < p; i++)
            {
                a *= n;
            }
        }
        else a = 1;        
        
        return a;
    }

int main ()
{
    int n, p;

    scanf("%d %d", &n, &p);

    printf("%d", power(n, p));

    return 0;
}