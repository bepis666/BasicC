#include <stdio.h>

int main()
{
    int a, b, sum = 0;

    input:
    scanf("%d %d", &a, &b);
    if ((a<=b) && (a<=100) && (a>=-100) && (b<=100) && (b>=-100))
    {
        for (int i = a; i <= b; i++)
        {
            sum += i*i;
        }
            
        printf("%d", sum);    
    }
    else goto input;
    
    return 0;
}