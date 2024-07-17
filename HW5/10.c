#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d", &a);
    
    if (a<0)
    {
        a *= -1;
    }
    else if (a==0)
    {
        printf("YES");
        return 0;
    }
        
    do
    {
        b = a%10;
        a /= 10;

        if ((a%10) >= b)
        {
            printf("NO");
            return 0;
        }     

    } while (a!=0);
    

    printf("YES");    
    return 0;
}