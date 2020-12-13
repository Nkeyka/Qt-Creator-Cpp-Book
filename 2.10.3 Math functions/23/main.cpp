#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = fabs(cos(M_PI / 7 - exp(x))) - pow(2 + sqrt(x * x * x * x * x), 1. / 7) + log((x * x * x * x + 1) / 6);
    printf("y(x) = %f", y);
    return 0;
}
