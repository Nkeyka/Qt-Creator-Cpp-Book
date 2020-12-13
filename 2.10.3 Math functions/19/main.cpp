#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = log(exp(x) + 6) - cbrt((x - 4) * (x - 4) + 1.47 * sin(sqrt(fabs(M_PI * x))));
    printf("y(x) = %f", y);
    return 0;
}
