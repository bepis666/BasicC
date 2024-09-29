#include <stdio.h>

int accounter();
int accounter()
{
    static int i = 0;
    char a; 
    scanf("%c", &a);
    
    if (a != 46)
    {
        if (a == 97) i++;
        accounter();
    }
    else return i;
}

int main()
{
    printf("%d", accounter());
    return 0;
}