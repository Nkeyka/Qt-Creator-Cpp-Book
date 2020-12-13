#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = pow(x * x + 2.7 * M_PI * cos(sqrt(fabs(x * x * x))) - 2, 1. / 7) + exp(x);
    printf("y(x) = %f", y);
    return 0;
}
