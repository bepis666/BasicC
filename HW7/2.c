#include <stdio.h>

void func(unsigned int x, unsigned int n, unsigned int sum);
void func(unsigned int x, unsigned int n, unsigned int sum)
{
    if ((n==0) || (x==n))
    {
        printf("%d", sum);
        return;
    }

    x ++;
    sum += x;
    func(x, n, sum);
}

int main()
{
    unsigned int n, sum;
    scanf("%d", &n);
    func(0, n, 0);

    return 0;
}