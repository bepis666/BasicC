#include <stdio.h>

int is_prime(int n);
int is_prime(int n)
{
    int sum = 0;
    if (n <= 1)
    {
        printf("NO");
        return 0;
    }
    
    for (unsigned int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            printf("NO");
            return 0;
        }
        
    }
    
    printf("YES");
}

int main()
{
    unsigned int n;
    
    scanf("%d", &n);
    is_prime(n);
    
    return 0;
}