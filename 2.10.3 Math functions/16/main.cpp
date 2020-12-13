#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = cbrt((1 + 3 * M_PI) / (1 + x * x)) + fabs(atan(x * x * x) * atan(x * x * x));
    printf("y(x) = %f", y);
    return 0;
}
