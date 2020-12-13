#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = x * x * x * x * x / sin(fabs(x - 7)) + pow(log(x * x + 2.5), 2) - pow(M_PI - 6.1 * x * x, 2. / 3);
    printf("y(x) = %f", y);
    return 0;
}
