#include <stdio.h>

int main()
{
    int a, b, c;
    
    scanf("%d%d%d", &a, &b, &c);

    if (((a>=b) && (a>=c)) && (a<(b+c))) printf("YES");
    else if (((b>=a) && (b>=c)) && (b<(a+c))) printf("YES");
    else if (((c>=a) && (c>=b)) && (c<(a+b))) printf("YES");
    else printf("NO");
    
    return 0;
}