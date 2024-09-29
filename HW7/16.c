#include <stdio.h>

int is2pow(int n);
int is2pow(int n)
{
    static int x = 1;

    if (n==x) return 1;
    else if (n<x) return 0;
    else if (n>x)
    {
        x *= 2;
        is2pow(n);
    }
    
}

int main() 
{
    int n;
    scanf("%d", &n);
    if (is2pow(n)) printf("YES");
    else printf("NO");

    return 0;
}