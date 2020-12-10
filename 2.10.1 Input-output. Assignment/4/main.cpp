/* Дан диаметр окружности d.
 * Найти длину окружности L и площадь круга S. */

#include <stdio.h>
#include <math.h>

int main()
{
    float d, L, S;
    printf("Input d = ");
    scanf("%f", &d);
    L = M_PI * d;
    S = M_PI * d / 2 * d / 2;
    printf("Length of circle = %f\n", L);
    printf("Square of circle = %f", S);
    return 0;
}
