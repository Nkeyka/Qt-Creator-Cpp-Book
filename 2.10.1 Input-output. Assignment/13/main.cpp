/* Известна диагональ ромба d.
 * Вычислить площадь S и периметр P. */

#include <stdio.h>
#include <math.h>

int main()
{
    float d, S, P;
    printf("Input d = ");
    scanf("%f", &d);
    S = d * d / 2;
    P = 4 * sqrt((d / 2) * (d / 2) + (d / 2) * (d / 2));
    printf("Square of rhomb = %f\n", S);
    printf("Perimetr of rhomb = %f", P);
    return 0;
}
