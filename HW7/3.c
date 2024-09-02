#include <stdio.h>

void func(unsigned int n);
void func(unsigned int n)
{
    if (n==0) return;

    printf("%d ", n%10);
    n /= 10;
    func(n);
}

int main()
{
    unsigned int n;
    scanf("%d", &n);

    if (n==0) printf("%d", 0);
    else func(n);

    return 0;
}