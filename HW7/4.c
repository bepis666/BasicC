#include <stdio.h>

void print_num(int num);
void print_num(int num)
{
    if (num / 10 != 0)
    {
        print_num(num / 10);
        printf("%d ", num % 10);
	}
	else
		printf("%d ", num);
        
    return;
}

int main()
{
    unsigned int num; 
    scanf("%d", &num);
    print_num(num);

    return 0;
}