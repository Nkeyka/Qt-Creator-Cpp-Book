#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = log(fabs(exp(x) - 4)) / log(4) - pow(2 * x / (3.21 + pow(cos(M_PI / 7), 2)), 1. / 7);
    printf("y(x) = %f", y);
    return 0;
}
