#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = cbrt(sqrt(fabs(x))) + fabs(pow(cos(x) / sin(x), 2) + exp(x) / 2 / M_PI - x * x * x);
    printf("y(x) = %f", y);
    return 0;
}
