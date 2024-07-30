#include <stdio.h>

void print_simple(int n);
void print_simple(int n)
{
    int i = 2, x;
    while (n != 1)
    {
        if (n%i==0) 
        {
            n /= i;
            printf("%d ", i);
        }
        else i++;
    }
}


int main()
{
    int n;

    scanf("%d", &n);
    print_simple(n);

    return 0;
}