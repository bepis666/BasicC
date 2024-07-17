#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;

    do
    {
        scanf("%c", &a);
        if (a != 46)
        { 
            printf("%c", tolower(a));  
        }
        
    } while (a != 46);
          
    return 0;
}