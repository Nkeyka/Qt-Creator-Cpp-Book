/* Даны два ненулевых числа a и b.
 * Найти сумму S, разность R, произведение P
 * и частное D модулей заданных чисел. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, S, R, P, D;
    printf("Input a = ");
    scanf("%f", &a);
    printf("Input b = ");
    scanf("%f", &b);
    S = a + b;
    R = a - b;
    P = a * b;
    D = fabs(a) / fabs(b);
    printf("Addition = %f\n", S);
    printf("Subtraction = %f\n", R);
    printf("Multiplaction = %f\n", P);
    printf("Division = %f", D);
    return 0;
}
