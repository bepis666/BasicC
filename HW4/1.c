#include <stdio.h>

int main()
{
    int a,b;

    scanf("%d%d",&a, &b);

    if (a<b) {
        printf("%d", a);
        printf(" ");
        printf("%d", b);
    }
    else {
        printf("%d", b);
        printf(" ");
        printf("%d", a);
    }

    return 0;
}