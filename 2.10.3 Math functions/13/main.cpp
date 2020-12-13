#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = log(exp(x) + 27) - sqrt(x * x * x + (pow(x, 7. / 5) + 14) / (sin(5 * x) + 5.1 * M_PI));
    printf("y(x) = %f", y);
    return 0;
}
