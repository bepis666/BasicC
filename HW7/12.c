#include <stdio.h>

int func(int n);
int func(int n)
{
    static int i = 0;

    if (n!=0)
    {
        i++;
        for (int k = 0; k < i; k++)
        {   
            if (n!=0)
            {
                printf("%d ", i);
                n--;
            }
        }
        func(n);
    }
}

int main()
{
    unsigned int n; 
    scanf("%d", &n);
    func(n);

    return 0;
}