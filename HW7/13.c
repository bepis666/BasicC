#include <stdio.h>

int func(int x);
int func(int x)
{
    static int m = 2;
    if (m<=x)
    {
        if ((x%m) != 0)
        {
            m++;
            func(x);
        }
        else
        {
            printf("%d ", m);
            x /= m;
            func(x);
        }
    }
    else return 0;
    
}

int main()
{
    unsigned int x; 
    scanf("%d", &x);
    func(x);

    return 0;
}