#include <stdio.h>

void func(int num);
void func(int num)
{
    static int number_Of_Digit = 1;
    static int output_number = 0;

    if (num!=0) 
    {
        output_number += (num%2) * number_Of_Digit;
        number_Of_Digit *= 10;
        func(num/2);
    }
    else printf("%d", output_number);
}

int main()
{
    unsigned int num; 
    scanf("%d", &num);
    func(num);

    return 0;
}