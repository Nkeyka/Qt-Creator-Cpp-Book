/* Даны три числа — a, b, c.
 * Найти среднее арифметическое
 * и среднее геометрическое заданных чисел. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, arithmetic, geometric;
    printf("Input a = ");
    scanf("%f", &a);
    printf("Input b = ");
    scanf("%f", &b);
    printf("Input c = ");
    scanf("%f", &c);
    arithmetic = (a + b + c) / 3;
    geometric = pow(a * b * c, 1. / 3);
    printf("Arithmetic mean = %f\n", arithmetic);
    printf("Geometric mean = %f", geometric);
    return 0;
}
