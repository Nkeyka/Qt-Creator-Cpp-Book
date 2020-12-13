#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = exp(2 * x) + pow(cos(pow(x - M_PI, 9) / (x * x * x * x + 3.4)) / sin(pow(x - M_PI, 9) / (x * x * x * x + 3.4)), 1. / 5) + pow(sin(6.2 * x), 2);
    printf("y(x) = %f", y);
    return 0;
}
