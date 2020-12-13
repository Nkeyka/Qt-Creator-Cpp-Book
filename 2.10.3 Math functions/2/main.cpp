#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = pow(tan(x), 4) + pow(sin(M_PI / x), 2) - exp(2 * x * x + 3.6 * x - 1);
    printf("y(x) = %f", y);
    return 0;
}
