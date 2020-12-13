#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = log(fabs(x * x * x - exp(x))) / log(5) - cbrt(2 * x / cos(x + 1.23 * M_PI));
    printf("y(x) = %f", y);
    return 0;
}
