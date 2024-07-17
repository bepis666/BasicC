#include <stdio.h>

int main()
{
    int a, count ;

    scanf("%d", &a);
    
    if (a<0)
    {
        a *= -1;
    }
    
    count = 0;
    while (a!=0)
    {            
        if ((a%10) == 9)
        {
            count++;
        }     
        a /= 10;
    }
        
    if (count==1)
    {
        printf("YES");
    }
    else printf("NO");
    
    return 0;
}