#include <stdio.h>

void func(int a, int b);
void func(int a, int b)
{   
    if (a < b)
    {
        printf("%d ",a);
        func(a+1,b);
    }
    else if (a > b)
    {
        printf("%d ",a);
        func(a-1,b);
    }
    else
    {
        printf("%d ",a);
        return;
    }
    
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    func(a,b);
    return 0;
}