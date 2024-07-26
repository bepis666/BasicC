#include <stdio.h>

void f(int);

void f(int x)
{
    unsigned int a = 0;
    
    while (x != 0)
    {
        a += x%10;
        x /= 10;
    }

    if (a%2 == 0) printf("YES");
    else printf("NO");
    
}

int main()
{
    unsigned int x;
    
    scanf("%d", &x);       
    f(x);
    
    return 0;
}