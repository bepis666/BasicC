#include <stdio.h>

int middle(int, int);

int middle(int n, int p)
    {
        return (n + p) / 2;
    }

int main ()
{
    int n, p;

    scanf("%d %d", &n, &p);

    printf("%d", middle(n, p));

    return 0;
}