#include <stdio.h>

int main()
{
    int a, sum = 0;

    input:
    scanf("%d", &a);
    
    if (a>=0)
    {
        while (a != 0)
        {
            sum += a%10;
            a /= 10;
        }
        
        printf("%d", sum);
        
    }
    else goto input;
    
    return 0;
}