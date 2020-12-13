#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = exp(x + M_PI / 3) + cbrt(tan(x * x * x * x / (x * x + 13.22))) + pow(cos(x), 3);
    printf("y(x) = %f", y);
    return 0;
}
