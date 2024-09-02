#include <stdio.h>

void func(unsigned int x, unsigned int n);
void func(unsigned int x, unsigned int n)
{
    if ((n==0) || (x==n)) return;

    x ++;
    printf("%d ", x);
    func(x, n);
}

int main()
{
    unsigned int n;
    scanf("%d", &n);
    func(0, n);

    return 0;
}