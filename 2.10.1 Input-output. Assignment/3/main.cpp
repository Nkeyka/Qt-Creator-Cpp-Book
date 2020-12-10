/* Известна диагональ квадрата d.
 * Вычислить площадь S и периметр P квадрата. */

#include <stdio.h>
#include <math.h>

int main()
{
    float d, S, P, a;
    printf("Input d = ");
    scanf("%f", &d);
    a = sqrt(d * d / 2);
    S = a * a;
    P = 4 * a;
    printf("Square of square = %f\n", S);
    printf("Perimetr of square = %f", P);
    return 0;
}
