/* Дана сторона квадрата a.
 * Вычислить периметр квадрата P,
 * его площадь S и длину диагонали d. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, P, d, S;
    printf("Input a = ");
    scanf("%f", &a);
    P = 4 * a;
    S = a * a;
    d = a * sqrt(2);
    printf("P = %f\n", P);
    printf("S = %f\n", S);
    printf("d = %f", d);
    return 0;
}
