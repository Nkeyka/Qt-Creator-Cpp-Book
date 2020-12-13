#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = sqrt(x * x * x + (pow(x, 4 / 3) - 1) / (sin(x) + M_PI + exp(x)));
    printf("y(x) = %f", y);
    return 0;
}
