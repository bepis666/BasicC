#include <stdio.h>

int main()
{
    int a, b, c, count ;

    scanf("%d", &a);
    
    if (a>0)
    {
        while (a!=0)
        {
            count = 0;
            b = a % 10;
            c = a;
            
            while (c!=0)
            {
                if (b==(c%10))
                {
                    count++;
                }

                if (count==2)
                {
                    printf("YES");
                    return 0;
                }
                
                c /= 10;

            }

            a /= 10;
        }
        printf("NO");
    
    }
    else printf("NO");
    return 0;
}