/* Заданы два катета прямоугольного треугольника a и b.
 * Вычислить площадь S и периметр P. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, S, P;
    printf("Input a = ");
    scanf("%f", &a);
    printf("Input b = ");
    scanf("%f", &b);
    c = sqrt(a * a + b * b);
    S = a * b / 2;
    P = a + b + c;
    printf("Square of triangle = %f\n", S);
    printf("Perimetr of triangle = %f", P);
    return 0;
}
