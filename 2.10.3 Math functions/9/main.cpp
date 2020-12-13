#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = pow(x, 1 + 3 * M_PI / 4) - 3 * x * x * x - pow(pow(x + 1, 4) + log10(x / (x + 1)), 1. / 5);
    printf("y(x) = %f", y);
    return 0;
}
