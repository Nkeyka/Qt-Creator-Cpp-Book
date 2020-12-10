/* Даны катеты прямоугольного треугольника a и b.
 * Найти гипотенузу c и углы треугольника α, β. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, alpha, betta;
    printf("Input a = ");
    scanf("%f", &a);
    printf("Input b = ");
    scanf("%f", &b);
    c = sqrt(a * a + b * b);
    alpha = atan(a / b) * 180 / M_PI;
    betta = 90 - alpha;
    printf("c = %f\n", c);
    printf("alpha = %f\n", alpha);
    printf("betta = %f", betta);
    return 0;
}
