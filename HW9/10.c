#include <stdio.h>

int pack(int size, int a[], int compressed_a[])
{
    int i = 0;
    char c = *a;
    
    *compressed_a = c;

    //printf("%c %c\n", c, *compressed_a);

    for (size_t j = 0; j < size; j++)
    {
        printf("%c %c %d\n", c, *(a+j), j);
        if (c == (char)*(a+j))
        {
            printf("yes\n");
            *(compressed_a+i+1) += 1;
        }
        // else
        // {
        //     i++;
        //     c = *(a+j);
        //     *(compressed_a+i) = c; 
        // }        
    }

    //printf("%d\n", i);
    printf("compressed: %c\n", *(compressed_a+1));

    return i;
}

int main()
{
    char a[1000] = {0}, compressed_a[1000] = {0}, c = 0;
    int i = 0, compressed_size;


    while (c != 46)
    {
        scanf("%c", &c);
        a[i] = c;
        i++;
    }
    
    compressed_size = pack(i, &a, &compressed_a);

    for (size_t j = 0; j < compressed_size; j++)
    {
        //printf("%c%d", compressed_a[j], compressed_a[j+1]);
    }
    
    return 0;
}