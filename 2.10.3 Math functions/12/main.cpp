#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = pow(x + tan(x), 2. / 5) - (1 - log(fabs(exp(x) + cos(M_PI / 8)))) / 2;
    printf("y(x) = %f", y);
    return 0;
}
