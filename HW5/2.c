#include <stdio.h>

int main()
{
    int a, b;

    input:
    scanf("%d %d", &a, &b);
    if ((a<=b) && (a<=100) && (a>=-100) && (b<=100) && (b>=-100))
    {
        for (int i = a; i <= b; i++)
        {
            printf("%d ", i*i);
        }
                
    }
    else goto input;
    
    return 0;
}