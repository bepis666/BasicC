#include <stdio.h>

int is_prime(int n, int delitel);
int is_prime(int n, int delitel)
{
    if (n==1) return 0;
    else if (n!=delitel)
    { 
        if ((n%delitel) != 0) is_prime(n, delitel+1);
        else return 0;
    }
    else return 1;
    
}

int main()
{
    int n;
    scanf("%d", &n);
    if (is_prime(n, 2)) printf("YES");
    else printf("NO");
    return 0;
}