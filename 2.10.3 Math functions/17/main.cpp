#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = tan(fabs(x)) * tan(fabs(x)) + pow(3, 2 * x * x - exp(x)) + pow(x, 2. / 7) / cos(M_PI * x) / cos(M_PI * x);
    printf("y(x) = %f", y);
    return 0;
}
