/* Даны длины сторон прямоугольника a и b.
 * Найти площадь S и периметр P. */

#include <stdio.h>

int main()
{
    float a, b, S, P;
    printf("Input a = ");
    scanf("%f", &a);
    printf("Input b = ");
    scanf("%f", &b);
    S = a * b;
    P = 2 * (a + b);
    printf("S = %f\n", S);
    printf("P = %f", P);
    return 0;
}
