/* Даны два ненулевых числа a и b.
 * Найти сумму S, разность R, произведение P
 * и частное d квадратов заданных чисел. */

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, S, R, P, d;
    printf("Input a = ");
    scanf("%f", &a);
    printf("Input b = ");
    scanf("%f", &b);
    S = a + b;
    R = a - b;
    P = a * b;
    d = a * a / b / b;
    printf("Addition = %f\n", S);
    printf("Subtraction = %f\n", R);
    printf("Multiplaction = %f\n", P);
    printf("Division = %f", d);
    return 0;
}
