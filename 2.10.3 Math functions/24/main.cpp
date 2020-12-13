#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = log(x * x + 2) - sin(x) * sin(x) + pow(2 - sqrt(fabs(x)) + sin(M_PI / exp(x) + 1), 1. / 5);
    printf("y(x) = %f", y);
    return 0;
}
