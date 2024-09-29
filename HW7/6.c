#include <stdio.h>

void reverse_string();
void reverse_string()
{
    char a; 
    scanf("%c", &a);
    
    if (a != 46)
    {
        reverse_string();
        printf("%c", a);
    }
    else return;
}

int main()
{
    reverse_string();
    return 0;
}