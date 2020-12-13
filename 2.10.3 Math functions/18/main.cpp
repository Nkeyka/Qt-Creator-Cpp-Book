#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = x * x * x * x - pow(M_PI - sqrt(fabs(x * x * x)) + pow(sin(x / (x * x + 1)), 2), 1. / 5);
    printf("y(x) = %f", y);
    return 0;
}
