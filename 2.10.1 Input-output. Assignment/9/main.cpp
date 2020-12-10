/* Поменять местами содержимое переменных A и B
 * и вывести новые значения A и B. */

#include <stdio.h>

int main()
{
    float A, B, C;
    printf("Input A = ");
    scanf("%f", &A);
    printf("Input B = ");
    scanf("%f", &B);
    C = A;
    A = B;
    B = C;
    printf("A = %f\n", A);
    printf("B = %f\n", B);
    return 0;
}
