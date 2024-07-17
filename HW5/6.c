#include <stdio.h>

int main()
{
    int a, b = 0;

    scanf("%d", &a);
    
    if (a>0)
    {
        do
        {
            b = a%10;
            a /= 10;

            if ((a%10)==b)
            {
                printf("YES");
                break;
            }
            else if (a==0)
            {
                printf("NO");
            }
            
            
        } while (a != 0);
                
    }
    else printf("NO");
    
    return 0;
}