#include <stdio.h>

int main()
{
    int z,a,b,c;

    scanf("%d",&z);

    a = (z/100);
    b = (z%100)/10;
    c = (z%100)%10;

    if ((a>=b) && (a>=c)) 
    {
        printf("%d", a);
    }
    else if ((b>=a) && (b>=c))
    {
        printf("%d", b);
    }
    else 
    {
        printf("%d", c);
    }
    
    return 0;
}