/* Даны катеты прямоугольного треугольника a и b.
 * Найти гипотенузу c и периметр P. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, P;
    printf("Input a = ");
    scanf("%f", &a);
    printf("Input b = ");
    scanf("%f", &b);
    c = sqrt(a * a + b * b);
    P = a + b + c;
    printf("c = %f\n", c);
    printf("Perimetr of triangle = %f", P);
    return 0;
}
