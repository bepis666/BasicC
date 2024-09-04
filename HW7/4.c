#include <stdio.h>

int lenght_num(int num);
int lenght_num(int num)
{
    static int temp = 0;
    
    if (num==0) 
    {
        num = temp;
        temp = 0;
        return num;
    }

    else 
    {
        num /= 10;
        temp++;
        lenght_num(num);
    }
}

int power(int a, int i);
int power(int a, int i)
{   
    static int temp = 1;
    if (i==0) 
    {
        a = temp;
        temp = 1;
        return a;
    } 
    
    else
    {
        temp *= a;
        i--;
        power(a, i);
    }
}

void print_num(int num);
void print_num(int num)
{
    if (num==0) return;

    printf("%d ", num / (power(10, lenght_num(num)-1)));
    num %= (power(10, lenght_num(num)-1));
    print_num(num);
}

int main()
{
    unsigned int num;
    scanf("%d", &num);
    
    if (num==0) printf("%d", 0);
    else print_num(num);

    return 0;
}