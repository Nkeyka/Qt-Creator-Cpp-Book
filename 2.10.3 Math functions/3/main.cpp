#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = fabs(x * x * x * x - cos(x)) - pow(1 + sqrt(x * x * x * x * x * x), 1. / 9) + pow(sin(M_PI / (exp(x) + 1)), 3);
    printf("y(x) = %f", y);
    return 0;
}
