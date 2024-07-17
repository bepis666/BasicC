#include <stdio.h>

int main()
{
    unsigned int a, b = 1, c = 1, d = 0;
    
    scanf("%d", &a);
    
    printf("%d ", b);
    for (unsigned int i = 1; i < a; i++)
    {
        b = c + d;
        d = c;
        c = b;

        printf("%d ", b);
    }
    
    return 0;
}