#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = (1 - log(fabs(x - cos(2 * x - M_PI)))) / (6 + pow(x, 4 * x - 1)) + pow(x, 3 / 5);
    printf("y(x) = %f", y);
    return 0;
}
