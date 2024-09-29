#include <stdio.h> 

int recurs_power(int n, int p);
int recurs_power(int n, int p)
{
    static int x = 1;
    if (p>0)
    {
        x *= n;
        recurs_power(n, p-1);
    }
    return x;
    
}

int main()
{
    int n, p;
    scanf("%d %d", &n, &p);
    printf("%d", recurs_power(n,p));
    return 0;
}