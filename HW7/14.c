#include <stdio.h>

void func();
void func()
{
    int x;
    scanf("%d", &x);
    if (x!=0)
    {
        if ((x%2)!=0)
        {
            printf("%d ", x);
        }
        func();
    }
    
    
}

int main()
{
    func();
    return 0;
}