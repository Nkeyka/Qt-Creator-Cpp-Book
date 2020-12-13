#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = log(fabs(cos(x - 2 * M_PI))) - cbrt(1 + exp(x) / (sin(x) - 3));
    printf("y(x) = %f", y);
    return 0;
}
