#include <stdio.h>

int main()
{
    int a;

    input:
    scanf("%d", &a);
    if (a>0)
    {
        if ((a>99) && (a<1000))
        {
            printf("YES");
        }
        else printf("NO");
        
    }
    else goto input;
    
    return 0;
}