#include <stdio.h>

int grow_up(int n);

int grow_up(int n)
{

    int a;

    if (n<0)
    {
        n *= -1;
    }
    else if (n==0)
    {
        printf("YES");
        return 0;
    }
        
    do
    {
        a = n%10;
        n /= 10;

        if ((n%10) >= a)
        {
            printf("NO");
            return 0;
        }     

    } while (n!=0);
    

    printf("YES");    
}

int main()
{
    int n;

    scanf("%d", &n);
    grow_up(n);
    
    return 0;
}