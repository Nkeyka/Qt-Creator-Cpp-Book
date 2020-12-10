/* Известно значение периметра P
 * равностороннего треугольника.
 * Вычислить площадь S. */

#include <stdio.h>
#include <math.h>

int main()
{
    float P, S, a;
    printf("Input P = ");
    scanf("%f", &P);
    a = P / 3;
    S = sqrt(3) / 4 * a * a;
    printf("S = %f", S);
    return 0;
}
