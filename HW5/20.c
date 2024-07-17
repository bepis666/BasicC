#include <stdio.h>

int main()
{
    unsigned int a, sum = 0;
    
    scanf("%d", &a);
    
    if (a <= 1)
        {
            printf("NO");
            return 0;
        }
    
    for (unsigned int i = 2; i < a; i++)
    {
        if ((a % i) == 0)
        {
            printf("NO");
            return 0;
        }
        
    }
    
    printf("YES");
    return 0;
}