#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = pow(x * x * x + cos(sqrt(fabs(x * x * x))), 1. / 5) + exp(x) / (cos(3 * x + M_PI / 15));
    printf("y(x) = %f", y);
    return 0;
}
