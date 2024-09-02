#include <stdio.h>

int lenght_num(int num, int i);
int lenght_num(int num, int i)
{
    i++;
    num /= 10;
    
    if (num==0) return i;
    else lenght_num(num, i);
}

int exp (int a, int b);
int exp (int a, int b)
{   
    if (b==0) return 1;
    else 
}

void print_num(int num);
void print_num(int num)
{
    if (num==0) return;

    printf("%d ", lenght_num(num, 0));
    return;
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