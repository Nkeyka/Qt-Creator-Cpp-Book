#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = x * x * x * x * x + pow(log(3 * x * x + 5) / log(3), 2) + pow(M_PI - 6 * x * x, 2. / 9);
    printf("y(x) = %f", y);
    return 0;
}
