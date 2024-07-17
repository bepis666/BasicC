#include <stdio.h>

int main()
{
    unsigned int a, counter = 0;

    do
    {
        scanf("%d", &a);
        if (a != 0)
        {
            counter++;
        }
    } while (a != 0);
        
    printf("%d", counter);    
    return 0;
}