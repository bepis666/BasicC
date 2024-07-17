#include <stdio.h>

int main()
{
    int a, even = 0, odd = 0;

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
        if ((a%10)%2 == 0)
        {
            even++;
        }
        else odd++;     
        a /= 10;
    }

    printf("%d %d", even, odd);    
    return 0;
}