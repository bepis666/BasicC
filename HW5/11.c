#include <stdio.h>

int main()
{
    int a, b, c, count;

    scanf("%d", &a);
    
    if (a<0)
    {
        a *= -1;
    }
    else if (a==0)
    {
        printf("%d", a);
        return 0;
    }
        
    count = -1;
    b = a;
    while (b != 0)
    {
        count++;
        b /= 10;
    }
    
    b = 0;
    while (a != 0)
    {
        
        c = 1;
        for (int i = 0; i < count; i++)
        {
            c *= 10;
        }
        count--;

        b += (a % 10) * c;    
          
        a /= 10;
    }
    

    printf("%d", b);    
    return 0;
}