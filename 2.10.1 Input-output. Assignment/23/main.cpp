/* Даны числа — a1, a2, a3, a4, a5.
 * Найти их среднее арифметическое
 * и среднее геометрическое значения. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a1, a2, a3, a4, a5, arithmetic, geometric;
    printf("Input a1, a2, a3, a4, a5: ");
    scanf("%f %f %f %f %f", &a1, &a2, &a3, &a4, &a5);
    arithmetic = (a1 + a2 + a3 + a4+ a5) / 5;
    geometric = pow(a1 * a2 * a3 * a4 * a5, 1. / 5);
    printf("Arithmetic mean = %f\n", arithmetic);
    printf("Geometric mean = %f", geometric);
    return 0;
}
