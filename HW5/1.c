#include <stdio.h>

int main()
{
    int a;

    input:
    scanf("%d",&a);
    if (a>100)
    {
        goto input;
    }
    
    for (int i = 1; i < a; i++)
    {
        printf("%d %d %d\n", i, i*i, i*i*i);
    }
    
    return 0;
}