/* Задан периметр квадрата P.
 * Вычислить сторону квадрата a,
 * диагональ d и площадь S. */

#include <stdio.h>
#include <math.h>

int main()
{
    float P, a, d, S;
    printf("Input P = ");
    scanf("%f", &P);
    a = P / 4;
    d = a * sqrt(2);
    S = a * a;
    printf("a = %f\n", a);
    printf("d = %f\n", d);
    printf("S = %f", S);
    return 0;
}
