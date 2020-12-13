#include <stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Enter x = ");
    scanf("%f", &x);
    y = cos(x * M_PI / 3) * cos(x * M_PI / 3) - sqrt(fabs(x)) - pow(3.4, x * x - 10) + log(x * x + 3);
    printf("y(x) = %f", y);
    return 0;
}
