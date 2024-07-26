#include <stdio.h>

int f(int, int);

int f(int n, int p)
    {
        int a = 0, output = 0, numberOfDigit = 1;

        while(n != 0)
        {
            a = n%p;
            output += a*numberOfDigit;
            numberOfDigit *= 10;
            n /= p;
        }

        return output;
        
    }

int main ()
{
    int n, p;

    scanf("%d %d", &n, &p);
        
    printf("%d", f(n,p));

    return 0;
}