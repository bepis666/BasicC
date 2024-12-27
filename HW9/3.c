#include <stdio.h>

void func_counter(int x, int a[]);
void func_counter(int x, int a[])
{
    while ((x) != 0)
    {
        *(a+(x%10)) += 1;
        x/=10;
    }   
}

int main()
{
    int x, a[10] = {0,0,0,0,0,0,0,0,0,0};

    scanf("%d", &x);
    func_counter(x, &a);
    
    if (x>0)
    {
        for (size_t i = 0; i < 10; i++)
        {
            if (a[i] != 0)
            {
                printf("%d %d\n", i, a[i]);
            }
        }
    }
    else
    {
        printf("0 1\n");
    }
    
    return 0;

}