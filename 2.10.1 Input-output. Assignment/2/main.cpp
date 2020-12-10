/* Известна гипотенуза c и прилежащий угол α прямоугольного треугольника.
 * Найти площадь треугольника S и угол β. */

#include <stdio.h>
#include <math.h>

int main()
{
    float c, alpha, S, betta, a, b;
    printf("Input c = ");
    scanf("%f", &c);
    printf("Input alpha = ");
    scanf("%f", &alpha);
    a = sin(alpha * M_PI / 180) * c;
    b = cos(alpha * M_PI / 180) * c;
    S = a * b / 2;
    betta = 90 - alpha;
    printf("Square of triangle = %f\n", S);
    printf("betta = %f", betta);
    return 0;
}
