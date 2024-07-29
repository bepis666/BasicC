#include <stdio.h>

int is_digit(char c);
int is_digit(char c)
{
    if ((c>47) && (c<58)) return 1;
    else return 0;    
}


int main()
{
    char c;
    int sum = 0;
    
    while (c!=46)
    {
        scanf("%c", &c);
        sum += is_digit(c);
    }
    printf("%d", sum);

    return 0;
}