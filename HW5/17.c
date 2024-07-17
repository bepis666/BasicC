#include <stdio.h>

int main()
{
    unsigned int a, b, sum, mul;
    
    scanf("%d", &a);
    
    for (unsigned int i = 10; i <= a; i++)
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
        

        if (sum == mul)
        {
            printf("%d ", i); 
        }
    }
    
           
    return 0;
}