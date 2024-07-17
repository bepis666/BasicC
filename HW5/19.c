#include <stdio.h>

int main()
{
    unsigned int a, sum = 0;
    
    scanf("%d", &a);
    
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }

    if (sum == 10)
    {
        printf("YES");
    }
    else printf("NO");
    
    return 0;
}