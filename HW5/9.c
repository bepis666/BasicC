#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);
    
    if (a<0)
    {
        a *= -1;
    }
    else if (a==0)
    {
        printf("NO");
        return 0;
    }
    
    
    while (a!=0)
    {            
        if ((a%10)%2 != 0)
        {
            printf("NO");
            return 0;
        }     
        a /= 10;
    }

    printf("YES");    
    return 0;
}