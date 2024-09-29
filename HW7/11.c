#include <stdio.h>

int func(int num);
int func(int num)
{
    static int number_Of_Digit = 0;

    if (num!=0)
    {
        if ((num%2) !=0 ) number_Of_Digit++;
        func(num/2);
    }
    return number_Of_Digit;
}

int main()
{
    unsigned int num; 
    scanf("%d", &num);
    printf("%d", func(num));

    return 0;
}