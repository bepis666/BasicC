#include <stdio.h>

int f(char c, int i);
int f(char c, int i)
{
    static int opened = 0, closed = 0, yes = 0;

    if ((i>0) && (yes>0)) 
    {
        if (c==40) opened++;
        else if (c==40) opened++;
        else if (c==41) closed++;

        if ((opened==closed) && (yes>0)) yes = 2;
        else yes = 1;
    }
    else
    {
        if ((c==40) && (i==0)) // Если символ "(" первый
        {
            opened++;
            yes = 1; 
        }
    }
    
    return yes;
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
        i = 1;
    }
    
    if (yes==2) printf("YES");
    else printf("NO");

    return 0;
}