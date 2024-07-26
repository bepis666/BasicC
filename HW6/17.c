#include <stdio.h>

int is_happy_number(int n);
int is_happy_number(int n)
{
    unsigned int b, sum, mul;
    for (unsigned int i = 10; i <= n; i++)
    {
        b = i;
        sum = 0;
        mul = 1;
        do
        {
            sum += b % 10;
            mul *= b % 10;
            b /= 10;
            
        } while (b != 0);
    }

    if (sum == mul) printf("YES"); 
    else printf("NO");
    
    return 0;
}

int main()
{
    unsigned int n;
    
    scanf("%d", &n);
    is_happy_number(n);
  
    return 0;
}