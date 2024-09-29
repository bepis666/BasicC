#include <stdio.h>

void func(int N);
void func(int N)
{
    if (N==0) return;

    printf("%d ", N);
    func(N-1);
}

int main()
{
    int N;
    scanf("%d", &N);
    func(N);
    return 0;
}