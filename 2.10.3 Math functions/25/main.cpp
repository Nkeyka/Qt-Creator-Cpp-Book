#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = log(exp(x)) / log(2) - cos(x / M_PI) + cbrt(fabs(tan(2 * x)) / (2.6 + x * x + x * x * x));
    printf("y(x) = %f", y);
    return 0;
}
