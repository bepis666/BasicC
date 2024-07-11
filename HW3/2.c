#include <stdio.h>

int main()
{
    int a,b,c;

    scanf("%d%d%d",&a, &b, &c);

    printf("%d", a);
    printf("+");
    printf("%d", b);
    printf("+");
    printf("%d", c);
    printf("=");
    printf("%d", a+b+c);
    printf("\n");

    printf("%d", a);
    printf("*");
    printf("%d", b);
    printf("*");
    printf("%d", c);
    printf("=");
    printf("%d", a*b*c);
    printf("\n");

    return 0;
}