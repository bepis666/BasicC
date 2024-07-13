#include <stdio.h>

int main()
{
    int x_1, y_1, x_2, y_2;
    float k, b;

    scanf("%d%d%d%d", &x_1, &y_1, &x_2, &y_2);

    k = (float)(y_2 - y_1)/(float)(x_2 - x_1);
    b = y_2 - k * x_2;

    printf("%.2f %.2f", k, b);
    
    return 0;
}