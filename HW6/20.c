#include <stdio.h>

int f(char c, int i);
int f(char c, int i)
{
    if ((c==40) && (i==0)) return 1;
    else if ((c==41) && (i==1)) return 1;
    else return 0;    
}


int main()
{
    char c;
    int yes = 0, i = 0;
    
    while (c!=46)
    {
        scanf("%c", &c);
        if (c==46) continue;
        yes = f(c,i);
        printf("%d\n", c);
        i = 1;
    }
    
    if (yes==1) printf("YES");
    else printf("NO");

    return 0;
}