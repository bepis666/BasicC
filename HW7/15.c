#include <stdio.h>

int max_find(int max);
int max_find(int max)
{
    int x;
    scanf("%d", &x);
    if (x!=0)
    {
        max = (max >= x) ? max : x; 
        max_find(max);
    }
    else return max;
    
    
}

int main()
{
    int max;
    scanf("%d", &max);
    printf("%d", max_find(max));
    return 0;
}