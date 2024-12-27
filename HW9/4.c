#include <stdio.h>

void print_digit(char s[])
{
    int i = 0, c, arr[10] = {0};

    do
    {
        c = *(s+i);
        if ((c >= 48) && (c <= 57))
        {
            //printf("%d ", c-48);
            arr[c-48]++;
        }
        i++;
        
    } while (*(s+i-1) != 46);
    
    for (size_t i = 0; i <= 9; i++)
    {
        if (arr[i] > 0)
        {
           printf("%d %d\n", i, arr[i]);
        }
    }
}

int main()
{
    char s[100], c = 0;
    int i = 0;

    do
    {
        scanf("%c", &(s[i]));
        i++;
    } while (s[i-1] != 46);
    
    print_digit(&s);

    return 0;

}